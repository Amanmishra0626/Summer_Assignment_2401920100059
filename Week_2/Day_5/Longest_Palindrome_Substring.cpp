class Solution {
private:
    int center(string& s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0;
        int maxi = 0;
        for (int i = 0; i < s.size(); i++) {
            int len1 = center(s, i, i);
            int len2 = center(s, i, i + 1);
            int len = max(len1, len2);   
            if (len > maxi) {
                maxi = len;
                start = i - (len - 1) / 2;
            }
        }
        string ans = s.substr(start, maxi);
        return ans;
    }
};
