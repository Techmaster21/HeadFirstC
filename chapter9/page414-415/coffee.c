#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *w = getenv("EXTRA");
	/* [ADDED] Though this is noted on the getenv man page, getenv returns NULL 
	 * if an environment variable is not found. Also, !NULL == 1. Since none of 
	 * candidate code includes an environment variable EXTRA, the first if will 
	 * always evaluate to true.
	 */
	if (!w)
		w = getenv("FOOD");
	if (!w)
		w = argv[argc - 1];
	char *c = getenv("EXTRA");
	if (!c)
		c = argv[argc - 1];
	printf("%s with %s\n", c, w);
	return 0;
}
