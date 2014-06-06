#include "stdio.h"
int gcd(int a,int b);
int lcm(int a,int b);
int main(int argc, char const *argv[])
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%dと%dの最小公倍数は%dです。\n",a,b,lcm(a,b));
	return 0;
}
int lcm(int a,int b)
{
	int x;
	x=a*b/gcd(a,b);
	return x;
}
int gcd(int a,int b)
{
	int r;
	r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}