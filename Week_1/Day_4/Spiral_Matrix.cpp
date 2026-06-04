class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        int total = row * col;

        int stRow = 0;
        int endRow = row - 1;
        int stCol = 0;
        int endCol = col - 1;

        while (count < total) {
            // stRow
            for (int i = stCol; i <= endCol && count < total; i++) {
                ans.push_back(matrix[stRow][i]);
                count++;
            }
            stRow++;
            // endCol
            for (int i = stRow; i <= endRow && count < total; i++) {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            // endRow
            for (int i = endCol; i >= stCol && count < total; i--) {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            // stCol
            for (int i = endRow; i >= stRow && count < total; i--) {
                ans.push_back(matrix[i][stCol]);
                count++;
            }
            stCol++;
        }
        return ans;
    }
};
