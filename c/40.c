#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a[3][3]={{10,20,15},{25,41,35},{33,22,11}};
	float b[3]={0,0,0},c[3]={0,0,0};
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			b[i]+=a[i][j];
			printf("%7d",a[i][j]);
			c[i]+=a[j][i];
		}
		printf("%7.2fd%7.2f\n",b[i],b[i]/3 );
	}
	for (int i = 0; i < 3; ++i)
	{
		printf("%7.2f",c[i] );
	}
	printf("\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("%7.2f",c[i]/3 );
	}
	printf("\n");
	return 0;
}