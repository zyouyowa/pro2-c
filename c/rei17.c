#include "stdio.h"

int main(int argc, char const *argv[])
{
	int s[101];
	int i,j;
	for (int i = 0; i < 101; ++i)
	{
		s[i]=0;
	}
	for (int i = 2; i < 101; ++i)
	{
		for (int j = i*2; j < 101; j=j+i)
		{
			s[j]=1;
		}
	}
	printf("100以下の素数は\n");
	for (int i = 2; i < 101; ++i)
	{
		if (s[i]==0)
		{
			printf("%4d",i);
		}
	}
	printf("\n");
	return 0;
}