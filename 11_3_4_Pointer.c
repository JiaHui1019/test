#include<stdio.h>

void inputArray(int arr[], int num)
{
    int i;
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b =temp;
}

void process(int *arr, int num)
{
    int *p;
    int *min, *max;
    p = max = min = arr;
    
    for(; p < arr + num; p++)
    {
        if(*p < *min) min = p;
        if(*p > *max) max = p;
    }
    if(min != arr)
    {
        swap(arr, min);
    }
    if(max != arr + num + 1)
    {
        if(max != arr)
        {
            swap((arr + num - 1), max);
        }
        if(max == 0)
        {
            swap((arr + num - 1), min);
        }
    }
}

void outputArray(int *arr, int num)
{
    int *p;
    p = arr;
    for(; p < arr + num; p++)
    {
        printf("%d ", *p);
    }
}

int main(void)
{
    int a[10];
    inputArray(a, 10);
    process(a, 10);
    outputArray(a, 10); 

    return 0;
}