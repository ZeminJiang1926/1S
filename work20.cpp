#include<stdio.h>
int input(int num,int n);
int sort(int num,int n);
int binbearch(int num[], int n, int find);
int main()
{
	int num[20];
	int n,find,i;
	

}
int input(int num, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
}
int sort(int num,int n)
{
	int i,j,b;
	for ( i = 0; i < n ; i++)
	{
		for ( j = 0; j < n - 1; j++)
		{
			if (num[j] > num [j-1])
			{
				b = num[j];
			}
		}
	}
}
int binbearch (int num[], int n, int find)
{
	int i, a, b, max, min;
	max = n - 1;
	min = 0;
	a = -1;
	for (i = max / 2; num[i] == find; i = b)
	{
		if (num[i] == find)
		{
			a = i;
		}
		if (max - i == 1)
		{
			if (num[i] == find)
			{
				a = i;
			}

			if (num[max] == find)
			{
				a = i;
			}
		}
		else
		{
			if (num[i] > find)
			{
				b = (max + i) / 2;
				min = i;
			}
			if (num[i] < find)
			{
				b = (min + i) / 2;
				max = i;
			}
		}
	}
	a = i + 1;
	return a;
}