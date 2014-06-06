#include "stdio.h"
void locate(int x,int y);
void color(int c);
void draw_t(int x,int y);
void draw_p(int x,int y);
int main(int argc, char const *argv[])
{
	printf("\x1b[2J");
		color(34);
		draw_t(5,1);
		color(33);
		draw_p(30,1);
		color(0);
	return 0;
}
void locate(int x,int y)
{
	printf("\x1b[%02d;%02dH",y,x);
}
void color(int c)
{
	printf("\x1b[%02dm",c);
}
void draw_t(int x,int y)
{
	for (int i = 0; i < 10; ++i)
	{
		locate(x,y+i);
		for (int j = 0; j < 10-i; ++j)
		{
			printf(" ");
		}
		for (int j = 0; j <2*i+1; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}
void draw_p(int x,int y)
{
	for (int i = 0; i < 10; ++i)
	{
		locate(x,y+i);
		for (int j = 0; j < 10-i; ++j)
		{
			printf(" ");
		}
		for (int j = 0; j < 10; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}