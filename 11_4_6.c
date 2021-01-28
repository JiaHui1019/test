#include<stdio.h>

void average(float *p, int n)
{
    float *p_end;
    float sum = 0, aver;
    p_end = p + n;
    for(; p < p_end; p++)
    {
        sum = sum + (*p);
    }
    aver = sum / n;
    printf("The average score is:%5.lf\n", aver);
}

void search(float (*p)[4], int n)
{
    int i;
    printf("The scores of the student of number %d are ", n);
    for(i = 0; i < 4; i++)
    {
        printf("%5.lf", *(*(p + n) + i));
    }
}

int main(void)
{
    float score[3][4] = {{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    average(&score[0][0], 12);
    search(score, 2);
    return 0;
}