#include "stdio.h"
float sqr2(void);
float f(float x);
int main(int argc, char const *argv[])
{
	printf("√%dの値は%f \n",2,sqr2() );
	return 0;
}
float sqr2(void)
{
	int i;
	float a,b,c;
	a=1.0;
	b=2.0;
	c=(a+b)/2.0;
	for (int i = 0; i < 100; ++i)
	{
		if (f(a)*f(c)<0)
		{
			b=c;
		}
		else
		{
			a=c;
		}
		c=(a+b)/2.0;
	}
	return c;
}
float f(float x)
{
	return x*x-2;
}