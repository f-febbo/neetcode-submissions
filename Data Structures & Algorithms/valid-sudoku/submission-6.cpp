class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows, cols;
        map<pair<int, int>, unordered_set<char>> squares;

        for(auto r{0uz}; r < 9; ++r){
            for(auto c{0uz}; c < 9; ++c){
                if(board[r][c] == '.'){
                    continue;
                }
                if(rows[r].count(board[r][c]) || 
                cols[c].count(board[r][c]) ||
                squares[{r / 3, c / 3}].count(board[r][c])){
                    return false;
                }
                cols[c].insert(board[r][c]);
                rows[r].insert(board[r][c]);
                squares[{r / 3, c / 3}].insert(board[r][c]);
            }
        }
        return true;
    }
};
