/*
#include<stdio.h>
int main()
{
	int num,i,j,sum,add;
	sum = 1;
	add = 0;
	scanf("%d", &num);
	for ( i = num; i >= 0; i--)
	{
		sum = 1;
		for ( j = 1; j <= i; j++)
		{
			sum = sum * j;
		}
		add = add + sum;
	}
	printf("%d", add);
}




#include<stdio.h>
int main()
{
	int a, b, c,x,y,z,max;
	scanf("%d %d %d", &a, &b, &c);
	if (a < 0)
	{
		x = -a;
	}
	else
	{
		x = a;
	}
	if (b < 0)
	{
		y = -b;
	}
	else
	{
		y = b;
	}
	if (c < 0)
	{
		z = -c;
	}
	else
	{
		z = c;
	}
	if (x > y)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	if ((x < z) && (y < z))
	{
		max = c;
	}
	printf("%d", max);
}






#include<stdio.h>
int main()
{
	int num,i;
	scanf("%d", &num);
	for ( i = 0 ; num != 1 ; )
	{
		i = 1 + i;
		if ((num % 2) == 0)
		{
			num = num / 2;
		}
		else
		{
			num = ((3 * num) + 1) / 2;
		}
	}
	printf("%d", i);
*/





#include<stdio.h>
int main()
{
	int num,i;
	scanf("%d", &num);
	for ( i = 2; num > 1; i++)
	{
		if (num == i)
		{
			printf("%d", i);
			num = num / i;
			i = 1;
		}
		else if (num % i == 0)
		{
			printf("%d ", i);
			num = num / i;
			i = 1;
		}
	}
	return 0;
}