#include "stdio.h"
void locate(int x,int y);
void color(int c);
int main(int argc, char const *argv[])
{
	color(31);
	printf("1:ということでlocate関数のできあがり");
	locate(10,20);
	color(32);
	printf("2:ということでlocate関数のできあがり");
	locate(5,5);
	color(33);
	printf("3:ということでlocate関数のできあがり");
	color(0);
	return 0;
}
void locate(int x,int y)
{
	printf("\x1b[%02d;%02dH",y,x);
}
void color(int c)
{
	printf("\x1b[%2dm ",c );
}