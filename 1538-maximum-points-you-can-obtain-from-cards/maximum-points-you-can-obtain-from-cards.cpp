class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    int total = 0;

    for (int x : cardPoints) total += x;

    int windowSize = n - k;

    if (windowSize == 0) return total;

    int sum = 0;

    for (int i = 0; i < windowSize; i++) {
        sum += cardPoints[i];
    }

    int minSum = sum;

    for (int i = windowSize; i < n; i++) {
        sum += cardPoints[i];
        sum -= cardPoints[i - windowSize];
        minSum = min(minSum, sum);
    }

    return total - minSum;
}
};