/* [ADDED] Note that if exec to ifconfig fails for a reason other than file not 
 * found (e.g. the user doesn't have permissions to execute it), this program 
 * will innacurately assume that exec fails because the file was not found and 
 * then deduces that must be because we are on Windows instead of a Unix based 
 * system. However, one will never see the original error because it will be 
 * overwritten by the call to ipconfig.
 */
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main()
{
	if (execl("/sbin/ifconfig", "/sbin/ifconfig", (char*)NULL) == -1)
		if (execlp("ipconfig", "ipconfig", (char*)NULL) == -1) {
			fprintf(stderr, "Cannot run ipconfig: %s", strerror(errno));
			return 1;
		}
	return 0;
}
