class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> greaterElement(10001, -1);
        stack<int> st;
        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                greaterElement[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        vector<int> ans;
        for (int num : nums1) {
            ans.push_back(greaterElement[num]);
        }
        return ans;
    }
};
