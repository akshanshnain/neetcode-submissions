class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto str : strs){
            vector<int> word(26, 0);
            for(int i = 0; i < str.length(); i++){
                word[str[i] - 'a']++;
            }
            string st(word.begin(), word.end());
            mp[st].push_back(str); 
        }
        vector<vector<string>> ans;
        for(auto p : mp){
            ans.push_back(p.second);
        }
        return ans;
    }
};
