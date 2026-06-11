class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string current = "";
        backtrack(ans, current, 0, 0, n);
        return ans;
    }
private:
    void backtrack(vector<string>& ans, string& current, int open, int close, int maxi) {
        if (current.length() == maxi * 2) {
            ans.push_back(current);
            return;
        }
        if (open < maxi) {
            current.push_back('(');
            backtrack(ans, current, open + 1, close, maxi);
            current.pop_back();
        }
        if (close < open) {
            current.push_back(')');
            backtrack(ans, current, open, close + 1, maxi);
            current.pop_back();
        }
    }
};
