class Solution {
    private:
     bool CheckEqual(int s1[],int s2[]){
        for(int i=0;i<26;i++){
            if(s1[i]!=s2[i])
            return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int c1[26]={0};
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            c1[index]++;
        }
        int c2[26]={0};
        int i=0;
        int windowSize=s1.length();
        while(i<windowSize && i<s2.length()){
            int index=s2[i]-'a';
            c2[index]++;
            i++;
        }
        if(CheckEqual(c1,c2))
        return 1;

        while(i<s2.length()){
            int newInd=s2[i]-'a';
            c2[newInd]++;
            int oldInd=s2[i-windowSize]-'a';
            c2[oldInd]--;
            if(CheckEqual(c1,c2))
            return 1;
            i++;
        }
        return 0;
    }
};
