#include "stdio.h"
int main(int argc, char const *argv[])
{
	printf("\x1b[31m red\n");
	printf("\x1b[32m green\n");
	printf("\x1b[33m yellow\n");
	printf("\x1b[0m default\n");
	return 0;
}