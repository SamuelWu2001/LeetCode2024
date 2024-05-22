class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        pair<int, int> current;
        for(int i=0;i<board.size();i++) {
            for(int j=0;j<board[i].size();j++) {
                if(board[i][j] == word[0] && wordSearch({i, j}, word, board, 1)) 
                  return true;
            }
        } 
        return false;
    }

    bool wordSearch(pair<int, int> current, string word, vector<vector<char>>& board, int index) {
        bool result = false;
        if (index == word.size()) return true;

        char tmp = board[current.first][current.second];
        board[current.first][current.second] = '!';
        // top 
        if (!result && current.first>=1 && board[current.first-1][current.second] == word[index]) { 
            current.first -= 1;
            result = wordSearch(current, word, board, index+1);
            current.first += 1;
        } 
        // bottom
        if (!result && current.first<board.size()-1 && board[current.first+1][current.second] == word[index]) { 
            current.first += 1;
            result = wordSearch(current, word, board, index+1);
            current.first -= 1;
        }
        // right
        if (!result && current.second<board[0].size()-1 && board[current.first][current.second+1] == word[index]) {  
            current.second += 1;
            result = wordSearch(current, word, board, index+1);
            current.second -= 1;
        }
        // left
        if (!result && current.second>=1 && board[current.first][current.second-1] == word[index]) {
            current.second -= 1;
            result = wordSearch(current, word, board, index+1);
            current.second += 1;
        } 
        board[current.first][current.second] = tmp;
        return result; 
    }
};
