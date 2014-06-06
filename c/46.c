#include "stdio.h"
int prim(int n);
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	if(prim(n)!=0)
	{
		printf("素数\n");
	}
	else
	{
		printf("素数じゃない\n");
	}

	return 0;
}
int prim(int n)
{
	int i;
	i=2;
	while(i<n)
	{
		if((n%i)==0)
		{
			return 0;
		}
		i++;
	}
	return 1;
}