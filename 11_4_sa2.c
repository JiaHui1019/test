#include<stdio.h>
#define M 3
#define N 4

void inverse(int a[][N], int b[][N])
{
    int i, j;
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            b[M - i - 1][N - j -1] = a[i][j];
        }
    }
}

int main(void)
{
    int a[M][N], b[M][N];
    int i, j;
    printf("Please input a %d*%d array:\n", M, N);
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    inverse(a, b);
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}