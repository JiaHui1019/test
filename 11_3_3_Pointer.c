#include<stdio.h>
#define N 6

int main(void)
{
    int a[N] = {2, 4, 8, 6, 5, 3}, i, key, index = 0;
    int *p = a;
    key = 8;
    for(; p < a + N; p++)
    {
        if(*p == key)
        {
            index = p - a;
            break;
        }
    }
    if(p == a + N) index = -1;

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