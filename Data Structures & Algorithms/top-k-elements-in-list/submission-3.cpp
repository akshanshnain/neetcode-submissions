class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for(auto const& [key, value] : mp){
            minHeap.push({value, key});
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};
