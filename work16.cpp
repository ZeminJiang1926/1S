#include<stdio.h>
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

		if ((number2 == 0)||(number4==0))
		{
			printf("error!");
		}
		else
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
				for (i = 1; i<(result1*result2); i++)
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
	}
	printf("end/n");
	return 0;
}