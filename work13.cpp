#include<stdio.h>
int main()
{
	int number;
	int gewei;
	int shiwei;
	int baiwei;
	int total;
	number = 100;
	for (; number < 1000; number++)
	{
		gewei = number % 10;
		shiwei = number % 100;
		shiwei = shiwei / 10;
		baiwei = number / 100;
		total = gewei *gewei*gewei + shiwei *shiwei*shiwei + baiwei *baiwei*baiwei;
		if (number == total)
		{
			printf("%d ", number);
		}
	}
}