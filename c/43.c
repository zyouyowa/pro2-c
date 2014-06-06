#include "stdio.h"
void locate(int x,int y);
void color(int a);
int main(int argc, char const *argv[])
{
	printf("1:");
	locate(10,20);
	color(31);
	printf("2:");
	locate(5,5);
	color(32);
	printf("3:");
	color(0);
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