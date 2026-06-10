class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count=0,j=0,i=0;
        while(i<t.size()&&j<s.size()){
            if(t[i]==s[j]){
                j++;
                count++;
            }
            i++;
        }
        if(count==s.size()){
            return true;
        }
        else{
            return false;
        }
    }
};
