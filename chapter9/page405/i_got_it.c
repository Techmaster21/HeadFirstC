#include <stdio.h>
#include <stdlib.h>

int main()
{
	puts("My PID's the same, see!");
	system("ps ux | head -n 1");
	system("ps ux | grep i_got_it | grep -v 'grep'");
	return 0;
}
