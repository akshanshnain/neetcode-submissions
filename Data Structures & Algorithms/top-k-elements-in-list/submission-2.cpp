class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        vector<pair<int, int>> count;
        for(auto const& [key, value] : mp){
            count.push_back({value, key});
        }
        vector<int> ans;
        sort(count.rbegin(), count.rend());
        for(int i = 0; i < k; i++){
            ans.push_back(count[i].second);
        }
        return ans;

    }
};
