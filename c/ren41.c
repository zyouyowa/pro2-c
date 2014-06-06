#include "stdio.h"
float ni(float n);
int main(int argc, char const *argv[])
{
	float i;
	for (float i = 0.0; i <1.1 ; i+=0.1)
	{
		printf("%5.1fの２乗は%5.2f\n",i,ni(i) );
	}
	return 0;
}
float ni(float n)
{
	float a;
	a=n*n;
	return a;
}