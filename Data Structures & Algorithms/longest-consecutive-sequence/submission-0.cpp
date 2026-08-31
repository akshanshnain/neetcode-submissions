class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        unordered_set<int> s(nums.begin(), nums.end());
        int len = 0;
        for(int i : s){
            if(!s.count(i - 1)){
                int currNum = i;
                int currLen = 1;
                while(s.count(currNum + 1)){
                    currNum++;
                    currLen++;
                }
                len = max(len, currLen);
            }
        }
        return len;
    }
};
