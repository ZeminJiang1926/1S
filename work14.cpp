/*#include<stdio.h>
int main()
{
	int number1;
	int number2;
	char jiajian;
	int number3;
	int number4;
	int result1;
	int result2;
	int i;
	int gongyueshu = 1;
	while (scanf("%d/%d%c%d/%d", &number1, &number2, &jiajian, &number3, &number4) != EOF)
	{
		
		if (jiajian == '+')
		{
			result1 = number1*number4 + number2*number3;
			result2 = number2*number4;
		}
		if (jiajian == '-')
		{
			result1 = number1*number4 - number2*number3;
			result2 = number2*number4;
		}
		if (result1 == 0)
		{
			printf("0");
		}
		else
		{
			for (i = 1; i < result1; i++)
			{
				if (result1 % i == 0 && result2 % i == 0)
				{
					gongyueshu = i;
				}
			}
			result1 = result1 / gongyueshu;
			result2 = result2 / gongyueshu;
			printf("%d/%d\n", result1, result2);
		}
	}
	return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number1;
	int number2;
	char jiajian;
	int number3;
	int number4;
	int result1;
	int result2;
	int i;
	int gongyueshu = 1;
	int atoi(char number[]);
	char number[1000];
	gets_s(number);
	number1 = atoi(number);
	printf("%d", number1);
	number2 = number[2];
	number3 = number[4];
	number4 = number[6];
	if (number[3] == '+')
	{
		result1 = number1*number4 + number2*number3;
		result2 = number2*number4;
	}
	if (number[3] == '-')
	{
		result1 = number1*number4 - number2*number3;
		result2 = number2*number4;
	}
	if (result1 == 0)
	{
		printf("0");
	}
	else
	{
		for (i = 1; i < result1; i++)
		{
			if (result1 % i == 0 && result2 % i == 0)
			{
				gongyueshu = i;
			}
		}
		result1 = result1 / gongyueshu;
		result2 = result2 / gongyueshu;
		printf("%d/%d\n", result1, result2);
	}
	
	

}