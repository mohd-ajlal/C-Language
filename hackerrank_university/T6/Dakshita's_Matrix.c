#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int matrix[5][5];
    int row = 0, col = 0, moves = 0;

    // read the matrix
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    // calculate the moves required
    moves = abs(2 - row) + abs(2 - col);

    // output the result
    printf("%d\n", moves);

    return 0;
}