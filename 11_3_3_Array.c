#include<stdio.h>
#define N 6

int main(void)
{
    int a[N] = {2, 4, 8, 6, 5, 3}, i, key, index = 0;
    key = 8;
    for(i = 0; i < N; i++)
    {
        if(a[i] == key)
        {
            index = i;
            break;
        }
    }
    if(i == N) index = -1;
    if(index == -1)
    {
        printf("Wasted!\n");
    }
    else
    {
        printf("The index of %d is %d\n", key, index);
    }

    return 0;    
}