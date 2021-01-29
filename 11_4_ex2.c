#include<stdio.h>

void inverse(int (*arr)[4], int n)
{
    int i, j;
    for(i = 2; i >= 0; i--)
    {
        for(j = 3; j >= 0; j--)
        {
            printf("%-5.d", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

int main(void)
{
    int a[3][4];
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    inverse(a, 12);

    return 0;
}