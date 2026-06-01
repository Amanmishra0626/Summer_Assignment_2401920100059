class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int newInd=1,copy=1;
        if(nums.empty()){
            return 0;
        }
        for(copy=1;copy<nums.size();copy++){
            if(nums[copy]!=nums[copy-1]){
                nums[newInd]=nums[copy];
                newInd++;
            }
        }
        return newInd;
    }
};
