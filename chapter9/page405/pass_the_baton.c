#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	puts("I'm a process, check out my PID!");
	system("ps ux | head -n 1");
	system("ps ux | grep pass_the_baton | grep -v 'grep'");
	printf("\n");
	execl("./i_got_it", "./i_got_it", (char*)NULL);
	puts("You shouldn't see me because there's no return from a successful exec"
	     "function");
	return 0;
}
