class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        vector<pair<int,vector<int>>>arr;
        for(auto & p : points){
            int dist = p[0]*p[0] + p[1]*p[1];
            arr.push_back({dist,p});
        }
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        for(int i = 0; i<k; i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};