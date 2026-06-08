class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++){
            int alpha=s[i]-'a';
            count[alpha]++;
        }
        for(int i=0;i<s.size();i++){
            int alpha=s[i]-'a';
            if(count[alpha]==1){
                return i;
            }
        }
        return -1;
    }
};
