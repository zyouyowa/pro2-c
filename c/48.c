#include "stdio.h"
float sqrn(int n);
float f(int n,float x);
int main(int argc, char const *argv[])
{
	int n;
	printf("２分法による√の計算、正の整数入力\n");
	scanf("%d",&n);
	printf("%d %f\n",n,sqrn(n) );
	return 0;
}
float sqrn(int n)

{
	float a,b,c;
	a=0.1;
	b=10.0;
	c=(a+b)/2.0;
	for (int i = 0; i < 100; ++i)
	{
		if(f(n,a)*f(n,c)<0) b=c;
		else a=c;
		c=(a+b)/2.0;
	}
	return c;
}
float f(int n,float x)
{
	return x*x-n;
}