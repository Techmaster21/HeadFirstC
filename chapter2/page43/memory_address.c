#include <stdio.h>

int y = 1;

int main()
{
	int x = 4;
	printf("x is stored at %p\n", &x);
	printf("y is stored at %p\n", &y);
	return 0;
}
