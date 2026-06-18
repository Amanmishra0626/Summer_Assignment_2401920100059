class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> high;
        int maxi = 0;
        int n = heights.size();
        for (int i = 0; i <= n; ++i) {
            int current = 0;
            if (i < n) {
                current = heights[i];
            }
            while (!high.empty() && current < heights[high.top()]) {
                int height = heights[high.top()];
                high.pop();
                int width = 0;
                if (high.empty()) {
                    width = i;
                } else {
                    width = i - high.top() - 1;
                }     
                maxi = max(maxi, height * width);
            }
            high.push(i);
        }
        return maxi;
    }
};
