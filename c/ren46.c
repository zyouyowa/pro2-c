#include "stdio.h"
int prim(int n);
int main(int argc, char const *argv[])
{
	int n;
	printf("素数判定２以上の自然数入れて\n");
	scanf("%d",&n);
	if (prim(n)!=0)
	{
		printf("%dは素数\n",n );
	}
	else 
		{printf("%dは素数ではない\n",n );}
	return 0;
}
int prim(int n)
{
	int i=2;
	while(i<n)
	{
		if ((n%i)==0)
		{
			return 0;
		}
		i++;
	}
	return 1;
}