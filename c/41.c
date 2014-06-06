#include "stdio.h"
float ni(float x);
int main(int argc, char const *argv[])
{
	printf("y=x^2\n x    y\n");
	for (float i = 0.0; i < 1.1; i+=0.1)
	{
		printf("%3.1f%5.2f\n",i,ni(i) );
	}
	return 0;
}
float ni(float x)
{
	return x*x;
}