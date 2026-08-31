class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        vector<vector<int>> freq(n + 1);
        for(auto i : mp){
            freq[i.second].push_back(i.first);
        }
        vector<int> ans;
        for(int i = n; i >= 1; i--){
            for(int j : freq[i]){
                ans.push_back(j);
                if(ans.size() == k){
                    return ans;
                }
            }
        }
        return ans;
    }
};
