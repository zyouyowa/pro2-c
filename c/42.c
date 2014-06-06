#include "stdio.h"
#define PI 3.14159
float ks2(int r);
float ks3(int r);
int main(int argc, char const *argv[])
{
	for (int i = 0; i < 11; ++i)
	{
		printf("%3d%8.2f%8.2f\n",i,ks2(i),ks3(i));
	}
	return 0;
}
float ks2(int r)
{
	float a=1;
	a=4*PI*r*r;
	return a;
}
float ks3(int r)
{
	float a=1;
	a=4*PI*r*r*r/3;
	return a;
}