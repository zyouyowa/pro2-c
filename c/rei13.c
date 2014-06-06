#include "stdio.h"
float en_men(float r);
int main(int argc, char const *argv[])
{
	float a,b;
	a=5.0;
	b=en_men(a);
	printf("半径%4.2fの円の面積は%6.3f\n",a,b);
	return 0;
}
float en_men(float r)
{
	float s;
	s=3.141593*r*r;
	return s;
}