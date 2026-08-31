class Solution {
public:
    string encode(vector<string>& strs) {
        string res = "";
        for (const string& s : strs) {
            res += to_string(s.length()) + "#" + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.length()) {
            int j = i;
            // Find the delimiter
            while (s[j] != '#') {
                j++;
            }
            
            // Get the length and move pointer 'i' past the '#'
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            
            // Extract the string and jump to the next segment
            res.push_back(s.substr(i, length));
            i += length;
        }
        return res;
    }
};