int connect_analysis(const int moves[], int width, int height, int length) {
    assert(width > 2);
    assert(height > 2);
    assert(width * height <= MAX_BOARD_SIZE);
    assert(length > 2);
    int max = width > height ? width : height;
    assert(length <= max);
    int board[MAX_BOARD_SIZE] = {};
    // variables

    for (int i = 0; i < width * height; i++) {
        int curr_move = moves[i];
        if (curr_move < 0 || curr_move > width - 1) {
            return INVALID_GAME;
            // not valid width
        } else if (board[curr_move] != 0) {
            return INVALID_GAME;
            // not valid height
        } else {
            // adding moves bc they are valid
            for (int j = 0; j < height; j++) {
                if (!board[j * width + curr_move]) {
                    int move = i % 2 == 0 ? 1 : 2;
                    board[j * width + curr_move] = move;
                    if (check_winner(board, width, height, length)) {
                        if (move == 1) {
                            return i;
                        } else {
                            return -1 * i;
                        }
                    }
                }
            }
        }
    }
    return TIE;
}

bool check_winner(const int board[], int width, int height, int length) {
    // check for horizontal winner
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width - length; col++) {
            if (board[row * width + col] == 0) {
                continue;
            }
            bool won = 1;
            for (int i = 0; i < length; i++) {
                if (board[row * width + col + i] != board[row * width + col]) {
                    won = 0;
                    continue;
                }
            }
            if (won) {
                return true;
            }
        }
    }
    // check for vertical winner
    for (int col = 0; col < width; col++) {
        for (int row = 0; row < height - length; row++) {
            if (board[row * width + col] == 0) {
                continue;
            }
            bool won = 1;
            for (int i = 0; i < length; i++) {
                if (board[(row + i) * width + col] != board[row * width + col]) {
                    won = 0;
                    continue;
                }
            }
            if (won) {
                return true;
            }
        }
    }
    // check for diagonal (bottom left -> top right)
    for (int col = 0; col < width - length; col++) {
        for (int row = 0; row < height - length; row++) {
            if (board[row * width + col] == 0) {
                continue;
            }
            bool won = 1;
            for (int i = 0; i < length; i++) {
                if (board[(row + i) * width + col + i] != board[row * width + col]) {
                    won = 0;
                    continue;
                }
            }
            if (won) {
                return true;
            }
        }
    }
    // check for diagonal (top left -> bottom right)
    for (int col = 0; col < width - length; col++) {
        for (int row = 0; row < height - length; row++) {
            if (board[row * width + col] == 0) {
                continue;
            }
            bool won = 1;
            for (int i = 0; i < length; i++) {
                if (board[(row + i) * width + col - i] != board[row * width + col]) {
                    won = 0;
                    continue;
                }
            }
        }
    }

    return false;
}
