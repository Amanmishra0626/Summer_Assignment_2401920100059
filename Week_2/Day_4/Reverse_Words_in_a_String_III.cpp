class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int start=0;
        while(i<=s.size()){   
            if(i==s.size()||s[i]==' '){
                reverse(s.begin()+start,s.begin()+i);
                start=i+1;
            }
            i++;
        }
        return s;
    }
};
