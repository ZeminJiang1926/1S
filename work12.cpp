#include<stdio.h>
int main()
{
	int input;
	int a;
	scanf("%d", &input);
	a = input % 2;
	if (a == 0)
	{
		printf("even number");
	}
	else
	{
		printf("odd number");
	}
	return 0;
}