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
    *b = temp;
}

void process(int arr[], int num)
{
    int maxNum = arr[0];
    int minNum = arr[0];
    int maxPos = 0;
    int minPos = 0;
    for(int i = 1; i < num; i++)
    {
        if(arr[i] < minNum)
        {
            minNum = arr[i];
            minPos = i;
        }
        if(arr[i] > maxNum)
        {
            maxNum = arr[i];
            maxPos = i;
        }
    }
    if(minPos != 0)
    {
        swap(&arr[0], &arr[minPos]);
    }
    if(maxPos != num - 1)
    {
        if(maxPos != 0)
        {
            swap(&arr[num - 1], &arr[maxPos]);
        }
        if(maxPos == 0)
        {
            swap(&arr[num - 1], &arr[minPos]);
        }
    }
}

void outputArray(int arr[], int num)
{
    int i;
    for(i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
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