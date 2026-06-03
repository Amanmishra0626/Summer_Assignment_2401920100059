class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0,end=height.size()-1;
        int area=0,maximum=0;
        while(start<end){
            area=min(height[start],height[end])*(end-start);
            maximum=max(maximum,area);
            if(height[start]>height[end]){
                end--;
            }
            else{
                start++;
            }
        }
        return maximum;
    }
};
