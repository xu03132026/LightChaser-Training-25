#include<stdio.h>
int main()
{
	int a;
	int b;
	char op;
	printf("请输入第一个数字\n");
	scanf_s("%d", &a);
	printf("请输入计算符号（+、-、*、/）\n");
	scanf_s(" %c", &op);                           //注意%c前面有一个空格，防止读取到上一个输入的换行符
	printf("请输入第二个数字\n");
	scanf_s("%d", &b);
	if (b == 0)
	{
		printf("除数不能为0");
	}
	else
	{
		switch (op)
		{
		case '+':
			printf("结果是：%d", a + b);
			break;
		case '-':
			printf("结果是：%d", a - b);
			break;
		case '*':
			printf("结果是：%d", a * b);
			break;
		case '/':
			printf("结果是：%d", a / b);
			break;
		default:
			printf("无效的计算符号\n");
		}
	}
	return 0;
}
