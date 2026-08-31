class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> mp;
       for(string str: strs){
        vector<int> word(26, 0);
        for(auto c: str){
            word[c - 'a']++;
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
