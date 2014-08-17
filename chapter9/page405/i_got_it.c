#include <stdio.h>
#include <stdlib.h>

int main()
{
	puts("My PID's the same, see!");
	system("ps ux");
	return 0;
}
