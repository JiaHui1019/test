#include<stdio.h>

const int N = 2;

struct StudentType
{
    char no[10];
    char name[10];
    double foreign;
    double spec1;
    double spec2;
    double total;
};

void InputMarks(struct StudentType student[], int n);
void AddMarks(struct StudentType student[], int n);
void OutputMarks(struct StudentType student[], int n);

int main(void)
{
    struct StudentType student[N];
    int n;
    scanf("%d", &n);
    InputMarks(student, n);
    AddMarks(student, n);
    OutputMarks(student, n);
    return 0;
}

void InputMarks(struct StudentType student[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%s", student[i].no);
        scanf("%s", student[i].name);
        scanf("%lf", &student[i].foreign);
        scanf("%lf", &student[i].spec1);
        scanf("%lf", &student[i].spec2);
    }
}
void AddMarks(struct StudentType student[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        student[i].total = student[i].foreign + student[i].spec1 + student[i].spec2;
    }
}
void OutputMarks(struct StudentType student[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%s's total is %5.lf\n", student[i].name, student[i].total);
    }
}