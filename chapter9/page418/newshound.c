#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	char *feeds[] = {"file:celebs.xml",
	                 "file:rock.xml",
	                 "file:gossip.xml"};
	                 /* [ADDED] The above was changed from the book so as to
	                  * actually demonstrate the concept, by using real, 
	                  * local rss feeds
	                  */
	int times = 3;
	char *phrase = argv[1];
	int i;
	for (i = 0; i < times; i++) {
		char var[255];
		sprintf(var, "RSS_FEED=%s", feeds[i]);
		char *vars[] = {var, (char*) NULL};
		if (execle("/usr/bin/python2", "/usr/bin/python2", "./rssgossip.py", 
		           phrase, (char*)NULL, vars) == -1) {
			/* [ADDED] Above changed from book so that script actually works,
			 * as /usr/bin/python defaults to python 3 now, and causes the 
			 * script to throw out multiple errors. If it doesn't work, try
			 * changing it back to /usr/bin/python
			 */
			fprintf(stderr, "Can't run script: %s\n", strerror(errno));
			return 1;
		}
	}
	return 0;
}
