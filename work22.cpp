#include<stdio.h>
int main()
{
	int first[100];
	int second[100];
	int a, b, c,d,i,t,num;
	a = 0;
	scanf("%d", &num);
	for ( d = 0; d < num ;d++)
	{
		scanf("%d", &first[d]);
	}
	second[0] = first[0];
	printf("%d\n", second[0]);
	for ( i = 1; i < num; i++)
	{
		if (first[i] >= second[i-1])
		{
			
			second[i] = first[i];
		}
		else
		{
			for (t = 0; t < i; t++)
			{
				if (first[i] < second[t])
				{
					for (b = i-1; b >= t; b--)
					{
						second[b + 1] = second[b];
					}
					second[t] = first[i];
					break;
				}
			}
		}
		for ( c = 0; c <= i ; c++)
		{
			printf("%d ", second[c]);			
		}
		printf("\n");
	}
}