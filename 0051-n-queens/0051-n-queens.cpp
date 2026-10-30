class Solution {
private:

    bool isValid(vector<string>& arr, int r, int c, int n) {

        // Horizontal
        for(int i = 0; i < n; i++) {
            if(arr[r][i] == 'Q') {
                return false;
            }
        }

        // Vertical
        for(int i = 0; i < n; i++) {
            if(arr[i][c] == 'Q') {
                return false;
            }
        }

        // Upper-left diagonal
        for(int i = r, j = c; i >= 0 && j >= 0; i--, j--) {
            if(arr[i][j] == 'Q') {
                return false;
            }
        }

        // Upper-right diagonal
        for(int i = r, j = c; i >= 0 && j < n; i--, j++) {
            if(arr[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void queen(vector<string>& arr,
               vector<vector<string>>& ans,
               int r,
               const int n) {

        // All queens placed
        if(r == n) {
            ans.push_back(arr);
            return;
        }

        // Try every column in current row
        for(int i = 0; i < n; i++) {

            if(isValid(arr, r, i, n)) {

                // Place queen
                arr[r][i] = 'Q';

                // Move to next row
                queen(arr, ans, r + 1, n);

                // Backtrack
                arr[r][i] = '.';
            }
        }
    }

public:

    vector<vector<string>> solveNQueens(int n) {

        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;

        queen(board, ans, 0, n);

        return ans;
    }
};