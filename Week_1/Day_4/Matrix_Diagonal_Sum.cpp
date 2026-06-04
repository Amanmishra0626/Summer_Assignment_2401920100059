class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int r=0;
        int c=mat[0].size()-1;
        int ans=0;
        while(r!=mat.size()&&c>=0){
            if(r==c){
                ans+= mat[r][r];
            }
            else{
                ans+= mat[r][r];
                ans+= mat[r][c]; 
            }
           
            r++;
            c--;
            
        }
        return ans;
    }
};
