#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int ***array;
	int n1, n2, n3;
	int i, j, k;
	
    printf("请输入所要创建的动态数组的第一维长度：");
	scanf("%d", &n1);
    printf("请输入所要创建的动态数组的第一维长度：");
	scanf("%d", &n2);
	printf("请输入所要创建的动态数组的第一维长度：");
    scanf("%d", &n3);
	
	array = (int***)malloc(sizeof(int**)*n1);           //第一维
	for(i = 0; i < n1; i++)
	{
		array[i] = (int**)malloc(sizeof(int*)*n2);      //第二维
		for(j = 0; j < n2; j++)
		{
			array[i][j]=(int*)malloc(sizeof(int)*n3);   //第三维
		}
	}
	
	for(i = 0; i < n1; i++)
	{
		for(j = 0; j < n2; j++)
		{
			for(k = 0; k < n3; k++)
			{
				array[i][j][k] = i + j + k + 1;
                printf("\n");
			}
            printf("\n");
		}
        printf("\n");
	}
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            free(array[i][j]);  //释放第三维数组
        }
    }
    for(i = 0; i < n1; i++)
    {
        free(array[i]);         //释放第二维数组
    }
    free(array);                //释放第一维数组

	return 0;
}