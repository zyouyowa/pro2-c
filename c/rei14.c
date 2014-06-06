#include "stdio.h"
int power(int b,int n);
int main(int argc, char const *argv[])
{
	int a,i;
	a=2;
	for (int i = 0; i < 10; ++i)
	{
		printf("%4dの%4d乗は%6d\n",a,i,power(a,i) );
	}
	return 0;
}
int power(int b,int n)
{
	int i,p;
	p=1;
	for (int i = 0; i < n; ++i)
	{
		p=p*b;
	}
	return p;
}