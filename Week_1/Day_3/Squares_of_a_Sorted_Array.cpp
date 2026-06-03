class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size()); 
        int i=0,j=nums.size()-1;
        for(int k=nums.size()-1;k>=0;k--){
            if((nums[i]*nums[i]) > (nums[j]*nums[j])){
                ans[k]=nums[i]*nums[i];
                i++;
            }
            else{
                ans[k]=nums[j]*nums[j];
            }
        }
        return ans;
    }
};
