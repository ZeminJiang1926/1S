#include<stdio.h>
int main()
{
	char sentence[101];
	int a, b, c;
	b = 1;
	gets_s(sentence);
	for ( a = 0; a < 101; a++)
	{
		if (sentence[a] == ' ')
		{
			b++;
		}
	}
	printf("%d", b);
}