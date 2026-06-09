class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>index;
        if(s.size()<p.size()){
            return index;
        }
        vector<int> count(26,0);
        for(int i=0;i<p.size();i++){
            int alpha=p[i]-'a';
            count[alpha]++;
        }
        vector<int> compare(26,0);
        for(int i=0;i<p.size();i++){
            int alpha=s[i]-'a';
            compare[alpha]++;
        }
        if(count==compare){
            index.push_back(0);
        }
        for(int i=p.size();i<s.size();i++){
            compare[s[i]-'a']++;
            compare[s[i-p.size()]-'a']--;
            if(count==compare){
            index.push_back(i-p.size()+1);
        }
        }
        return index;
    }
};
