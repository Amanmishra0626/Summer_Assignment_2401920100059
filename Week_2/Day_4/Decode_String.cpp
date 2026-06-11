class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return decode(s, i);
    }
private:
    string decode(const string& s, int& i) {
        string result = "";
        while (i < s.size() && s[i] != ']') {
            if (!isdigit(s[i])) {
                result += s[i];
                i++;
            } 
            else {
                int num = 0;
                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i++;
                string insideStr = decode(s, i);
                i++; 
                while (num > 0) {
                    result += insideStr;
                    num--;
                }
            }
        }
        
        return result;
    }
};
