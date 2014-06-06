#include "stdio.h"
int gcd(int a,int b);
int lcm(int a,int b);
int main(int argc, char const *argv[])
{
	int a,b;
	printf("２つ整数入力\n");
	scanf("%d %d",&a,&b);
	printf("%dと%dの最小公倍数は%d\n",a,b,lcm(a,b));
	return 0;
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
int lcm(int a,int b)
{
	int x;
	x=a*b/gcd(a,b);
	return x;
}
