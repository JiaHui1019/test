#include<stdio.h>

const int M = 3, N = 4;
// <==> #define M 3
// <==> #define N 4

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void inverse(int *a, int n)
{
    int *p, *q;
    for(p = a, q = a + n - 1; p <= q; p++, q--)
    {
        swap(p, q);
    }
}

int main(void)
{
    int a[M][N];
    int i, j;
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    inverse(&a[0][0], M*N);
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}