#include "stdio.h"
#define PI 3.141593
float hyou(float r);
float tai(float r);
int main(int argc, char const *argv[])
{
	float i;
	printf("     r    surf    vol\n");
	for (float i = 1; i < 11; ++i)
	{
		printf("%7.2f %7.2f %7.2f\n",i,hyou(i),tai(i) );
	}
	return 0;
}
float hyou(float r)
{
	float s;
	s=4*PI*r*r;
	return s;
}
float tai(float r)
{
	float s;
	s=4*PI*r*r*r/3;
	return s;
}