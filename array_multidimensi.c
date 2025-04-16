#include <stdio.h>

int main(void)
{
    // Array 1D
    int x[5] = {1, 2, 3, 4, 5};
    
    // Array 2D
    int y[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Array 3D
    int z[3][2][2] = {
        {{3, 2}, {4, 5}},
        {{1, 1}, {4, 8}},
        {{7, 8}, {7, 9}}
    };

    // printf("x[0] = %d\n", x[0]);
    // printf("y[0][2] = %d\n", y[0][2]);
    // printf("z[1][0][1] = %d\n", z[1][0][1]);

    int i, j, k;
    // for (i = 0; i < 5; i++) {
    //     printf("x[%d] = %d\n", i, x[i]);
    // }

    // for (i = 0; i < 3; i++) {
    //     for (j = 0; j < 3; j++) {
    //         printf("y[%d][%d] = %d\n", i, j, y[i][j]);
    //     }
    // }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                printf("z[%d][%d][%d] = %d\n", i, j, k, z[i][j][k]);
            }
        }
        printf("==================\n");
    }

    return 0;
}
