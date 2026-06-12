class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0;
        int i = 0;
        int count = 1;
        while (i < chars.size() - 1) {
            if (chars[i] != chars[i + 1]) {
                chars[idx++] = chars[i];
                if (count > 1) {
                    string s = to_string(count);
                    for (char c : s) {
                        chars[idx++] = c;
                    }
                    count = 1;
                }

            } else {
                count++;
            }
            i++;
        }
        chars[idx++] = chars[i];
        if (count > 1) {
            string s = to_string(count);
            for (char c : s) {
                chars[idx++] = c;
            }
        }
        return idx;
    }
};
