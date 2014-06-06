#include "stdio.h"
int main(int argc, char const *argv[])
{
	int n,i=2;
	printf("素因数分解");
	scanf("%d",&n);
	printf("%d = ",n );
	while(n!=1)
	{
		if ((n%i)==0)
		{
			printf("%d",i );
			n/=i;
			if (n!=1) printf(" * ");
		}
		else i++;
	}
	printf("\n");
	return 0;
}