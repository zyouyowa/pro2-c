#include<stdio.h>
float absy(float a);
float sqr(float n);
main()
{
	int n;
	n=5;
	printf("ルート%dの値は%f\n",n,sqr(n));
}
float sqr(float n)
{
	float a,b;
	a=0.0; b=2.0;
	while(absy(a-b)>1e-5)
	{
		a=b;
		b=1+(n-1)/(1+a);
	}
	return b;
}
float absy(float a)
{
	if(a>0)return a;
	return -a;
}
