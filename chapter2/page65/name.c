#include <stdio.h>

int main()
{
	char name[40];
	printf("Enter your name: ");
	scanf("%39s", name);
	printf("Your name is: %s\n", name);

	return 0;
}
