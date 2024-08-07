#include <stdio.h>

#define N 9

// Function to check if placing num in grid[row][col] is safe
int isSafe(int grid[N][N], int row, int col, int num) {
    int x;
	for (x = 0; x < N; x++) {
        if (grid[row][x] == num || grid[x][col] == num || grid[row - row % 3 + x / 3][col - col % 3 + x % 3] == num) {
            return 0;
        }
    }
    return 1;
}

// Function to solve the Sudoku using backtracking
int solveSudoku(int grid[N][N]) {
    int row, col, isEmpty = 0;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                isEmpty = 1;
                break;
            }
        }
        if (isEmpty) break;
    }
    
    if (!isEmpty) return 1;
    int num;
    for (num = 1; num <= N; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;
            if (solveSudoku(grid)) return 1;
            grid[row][col] = 0;
        }
    }
    return 0;
}

// Function to print the Sudoku grid
void printGrid(int grid[N][N]) {
	int r,d;
    for (r = 0; r < N; r++) {
        for (d = 0; d < N; d++) {
            printf("%d ", grid[r][d]);
        }
        printf("\n");
    }
}

int main() {
    int grid[N][N];
    int i,j;

    // Read the Sudoku grid from input
    for ( i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    if (solveSudoku(grid)) {
        printGrid(grid);
    } else {
        printf("No Solution exists\n");
    }

    return 0;
}
