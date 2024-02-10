#include <stdio.h>

// N: 5
//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

int main(void)
{
    int n, row, col;
    printf("N: ");
    scanf("%i", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n-row; col++)
            printf("  ");
        for (col = 1; col <= row; col++)
            printf("%i ", col);
        printf("\n");
    }
}
