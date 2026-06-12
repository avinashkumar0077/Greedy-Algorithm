class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       while(stones.size() > 1){
        sort(stones.begin(),stones.end());
        int n = stones.size();
        int y= stones[n-1];
        int x = stones[n-2];
        stones.pop_back();
        stones.pop_back();
        if(y != x){
            stones.push_back(y-x);
        }
       }
       return stones.empty() ? 0 : stones[0];
    }
};