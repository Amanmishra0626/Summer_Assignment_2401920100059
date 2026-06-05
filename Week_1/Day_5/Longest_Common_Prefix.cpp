class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp="";
        bool flag=1;
        if(strs.empty()){
            return temp;
        }
        for(int i=0;i<strs[0].size();i++){
            for(int j=0;j<strs.size()-1;j++){
                if(i>=strs[j+1].size()||strs[j][i]!=strs[j+1][i]){
                    flag=0;
                    break;
                }
            }
            if(flag){
                temp.push_back(strs[0][i]);
            }
            else{
                break;
            }
        }
        return temp;
    }
};
