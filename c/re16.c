#include "stdio.h"
void locate(int x,int y);
int main(int argc, char const *argv[])
{
	printf("1:ということでlocate関数のできあがり");
	locate(10,20);
	printf("2:ということでlocate関数のできあがり");
	locate(5,5);
	printf("3:ということでlocate関数のできあがり");
	return 0;
}
void locate(int x,int y)
{
	printf("\x1b[%02d;%02dH",y,x);
}