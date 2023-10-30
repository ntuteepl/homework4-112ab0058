#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        int bestMatch = -1;
        int bestScore = -1;

        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > bestScore) {
                bestScore = matrix[i][j];
                bestMatch = j;
            }
        }

        printf("boy %d pair with girl %d.", i + 1, bestMatch + 1);
    }

    return 0;
}
