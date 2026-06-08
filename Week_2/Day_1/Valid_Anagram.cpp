class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26,0);
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            int alp=s[i]-'a';
            count[alp]++;
        }
        for(int i=0;i<t.size();i++){
            int alp=t[i]-'a';
            count[alp]--;
        }
        for(int i=0;i<26;i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
    }
};
