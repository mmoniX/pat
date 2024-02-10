#include <stdio.h>

// N: 5
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

int main(void)
{
    int n, row, col;
    printf("N: ");
    scanf("%i", &n);
    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
            printf("%i ", col);
        printf("\n");
    }
}


// N: 5
// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1

int main(void)
{
    int n, row, col;
    printf("N: ");
    scanf("%i", &n);
    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
            printf("%i ", col % 2);
        printf("\n");
    }
}


// N: 5
// E E E E E
// D D D D
// C C C
// B B
// A

int main(void)
{
    int n, row, col;
    printf("N: ");
    scanf("%i", &n);
    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
            printf("%c ", row + 64);
        printf("\n");
    }
}


// N: 5
// A A A A A
// B B B B
// C C C
// D D
// E

int main(void)
{
    int n, row, col;
    printf("N: ");
    scanf("%i", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n-row+1; col++)
            printf("%c ", row + 64);
        printf("\n");
    }
}
