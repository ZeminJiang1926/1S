#include<stdio.h>
int bob(int number[],int num);
int findfirst(int number[], int num,int value);
int halffind(int number[], int num, int value);
int average(int number[], int num);
int main()
{
	int number[10];
	int num;
	int a,b,c,value;
	float d;
	num = 10;
	value = 10;
	for (a = 0; a < 10; a++)
	{
		scanf("%d", &number[a]);
	}	
	bob(number,num);
	b = findfirst(number, num, value);
	c = halffind(number, num, value);
	d = average(number, num);
	for (a = 0; a < 10; a++)
	{
		printf("%d ", number[a]);
	}
	printf("\n");
	printf("%d\n", b);
	printf("%d\n", c);
	printf("average = %f\n", d);
}
int bob(int number[],int num)
{
	int a;
	int i, x;
	for (i = num - 1; i > -1; i--)
	{
		for (x = 0; x < i; x++)
		{
			if (number[x] < number[x + 1])
			{
				a = number[x];
				number[x] = number[x + 1];
				number[x + 1] = a;
			}
		}
	}
	return 0;
}
int findfirst(int number[], int num, int value)
{
	int i;
	int a = -1;
	for (i = num - 1; i > -1 ; i--)
	{
		if (number[i] == value)
		{
			a = i + 1;			
		}
	};
	return a;
}
int halffind(int number[], int num, int value)
{
	int i,a,b,max,min;
	max = num - 1;
	min = 0;
	a = -1;
	for ( i = max / 2; number[i] == value ; i = b)
	{
		if (number[i] == value)
		{
			a = i;
		}
		if (max - i == 1)
		{
			if (number[i] == value)
			{
				a = i;
			}

			if (number[max] == value)
			{
				a = i;
			}
		}
		else
		{
			if (number[i] > value)
			{
				b = (max + i) / 2;
				min = i;
			}
			if (number[i] < value)
			{
				b = (min + i) / 2;
				max = i;
			}
		}
	}
	a = i + 1;
	return a;
}
int average(int number[], int num)
{
	int i,sum;
	float b;
	sum = -1;
	for ( i = 0; i < num ; i++)
	{
		sum = sum + number[i];
	}
	b = sum / num;
	return b;
}





/*
#include<stdio.h>
int swap(int a,int b);
int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	printf("%d %d\n", a, b);
}
int swap(int a,int b)
{
	int c;
	c = a;
	a = b;
	b = c;
	return 0;
}*/