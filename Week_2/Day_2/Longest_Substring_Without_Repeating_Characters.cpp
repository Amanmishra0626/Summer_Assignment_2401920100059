class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>count(256,0);
        int end=0,start=0;
        int longest=0;
        while(end<s.size()){
            count[s[end]]++;
            while(count[s[end]]>1){
                count[s[start]]--;
                start++;
            }
            longest=max(longest,end-start+1);
            end++;
        }
        return longest;
    }
};
