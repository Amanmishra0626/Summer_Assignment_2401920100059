class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string repeat=s+s;
        string check=repeat.substr(1,repeat.size()-2);
        int valid=check.find(s);
        if(valid!=-1){
            return true;
        }
        else{
            return false;
        }
    }
};
