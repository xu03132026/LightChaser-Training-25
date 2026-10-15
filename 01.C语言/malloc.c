#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n;
	int* arr;
	int i;
	double sum = 0, avg;
	printf("请输入数字的个数：\n");
	scanf_s("%d", &n);
	arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL)
	{
		printf("内存分配失败！\n");
		return 1;
	}
	for (i = 0;i < n;i++)
	{
		printf("请输入第%d个数字:", i + 1);
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum / n;
	printf("平均值=%.2f\n", avg);
	free(arr);
	arr = NULL;
	return 0;
}