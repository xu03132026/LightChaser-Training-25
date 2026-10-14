void swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后：a=%d,b=%d\n", a, b);
	return 0;
}