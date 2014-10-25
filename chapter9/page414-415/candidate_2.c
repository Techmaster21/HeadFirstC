/* [ADDED] Note that the book includes another call to fprintf and another 
 * return. This has been removed, and the call within the candidate slightly 
 * changed because it did nothing and included a mismatched brace.
 * Also the book should have included unistd.h for the exec functions
 */
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	if(execl("./coffee", "coffee", (char*)NULL) == -1) {
		fprintf(stderr, "Can't create order: %s\n", strerror(errno));
		return 1;
	}
	return 0;
}
