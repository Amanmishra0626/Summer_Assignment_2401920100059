class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&& s[i]<='Z')||(s[i]>='0'&& s[i]<='9')){
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]>='A'&& temp[i]<='Z'){
                temp[i]=temp[i]-'A'+'a';
            } 
        }
        int st=0;
        int e=temp.size()-1;
        while(st<e){
            if(temp[st]!=temp[e]){
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
};
