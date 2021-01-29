#include<stdio.h>

void inverse(int *arr, int n)
{
    int *p = arr;
    int *p_end = arr + n;
    int cnt = 0;
    for( ; p_end > p; p_end--)
    {
        if(cnt < 4)
        {
            printf("%-5.d", *(p_end - 1));
            cnt++;
        }
        if(cnt == 4)
        {
            printf("\n");
            cnt = 0;
        }
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
    inverse(&a[0][0], 12);

    return 0;
}