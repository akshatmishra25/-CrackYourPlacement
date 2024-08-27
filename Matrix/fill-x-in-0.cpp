void floodFill(vector<vector<char>>& mat, int x, int y, char prevV, char newV) {
    int M = mat.size(), N = mat[0].size();

    // Boundary condition and check if the current cell has the previous value
    if (x < 0 || x >= M || y < 0 || y >= N || mat[x][y] != prevV) return;

    // Update the cell to the new value
    mat[x][y] = newV;

    // Recursive calls in all four directions
    floodFill(mat, x + 1, y, prevV, newV);
    floodFill(mat, x - 1, y, prevV, newV);
    floodFill(mat, x, y + 1, prevV, newV);
    floodFill(mat, x, y - 1, prevV, newV);
}

vector<vector<char>> fill(int n, int m, vector<vector<char>> mat) {
    int M = mat.size(), N = mat[0].size();

    // Replace all 'O' with '-'
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] == 'O')
                mat[i][j] = '-';

    // Call floodFill for all '-' lying on edges
    for (int i = 0; i < M; i++)   // Left side
        if (mat[i][0] == '-')
            floodFill(mat, i, 0, '-', 'O');
    for (int i = 0; i < M; i++)  // Right side
        if (mat[i][N - 1] == '-')
            floodFill(mat, i, N - 1, '-', 'O');
    for (int i = 0; i < N; i++)   // Top side
        if (mat[0][i] == '-')
            floodFill(mat, 0, i, '-', 'O');
    for (int i = 0; i < N; i++)  // Bottom side
        if (mat[M - 1][i] == '-')
            floodFill(mat, M - 1, i, '-', 'O');

    // Replace all remaining '-' with 'X'
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] == '-')
                mat[i][j] = 'X';

    return mat;
}