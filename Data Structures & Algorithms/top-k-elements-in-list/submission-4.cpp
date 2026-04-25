class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        // for(auto const& [key, value] : mp){
        //     minHeap.push({value, key});
        //     if(minHeap.size() > k){
        //         minHeap.pop();
        //     }
        // }
        // vector<int> ans;
        // for(int i = 0; i < k; i++){
        //     ans.push_back(minHeap.top().second);
        //     minHeap.pop();
        // }
        // return ans;
        vector<vector<int>> freq(n + 1);
        for(auto const& [key, value] : mp){
            freq[value].push_back(key);
        }
        vector<int> res;
        for(int i = n ; i >= 0; i--){
            for(int i : freq[i]){
                res.push_back(i);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;
    }
};
