class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26, 0);
        for(char i : s){
            count[i - 'a']++;
        }
        for(char c : t){
        count[c - 'a']--;
        }
        for(int v : count){
            if( v != 0){
                return false;
            }
        }
        return true;
    }
};
