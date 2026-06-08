class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26,0);
        for(int i=0;i<magazine.size();i++){
            int alpha=magazine[i]-'a';
            count[alpha]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            int alpha=ransomNote[i]-'a';
            count[alpha]--;
        }
        for(int i=0;i<26;i++){
            if(count[i]<0){
                return false;
            }
        }
        return true;
    }
};
