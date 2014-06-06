#include "stdio.h"
void locate(int x,int y);
void color(int a);
void san(int x,int y);
void hei(int x,int y);
int main(int argc, char const *argv[])
{
	printf("\x1b[2J");
	color(34);
	san(5,1);
	color(33);
	hei(30,1);
	color(0);
	printf("\n");
	return 0;
}
void locate(int x,int y)
{
	printf("\x1b[%02d;%02dH",y,x );
}
void color(int a)
{
	printf("\x1b[%dm",a);
}
void san(int x,int y)
{
	for (int i = 0; i < 8; ++i)
	{
		locate(x,y+i);
		for (int j = 0; j < 8-i ; ++j)
		{
			printf(" ");
		}
		for (int j = 0; j < 2*i+1; ++j)
		{
			printf("*");
		}
	}
}
void hei(int x,int y)
{
	for (int i = 0; i < 8; ++i)
	{
		locate(x,y+i);
		for (int j = 0; j < 8-i; ++j)
		{
			printf(" ");
		}
		for (int j = 0; j < 10; ++j)
		{
			printf("*");
		}
	}
}