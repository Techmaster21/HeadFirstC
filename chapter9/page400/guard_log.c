#include <stdio.h>
#include <stdlib.h> /* [ADDED] This is where the system() function comes from */
#include <time.h>

char* now()
{
	time_t t;
	time(&t);
	return asctime(localtime(&t));
}

/* Master Control Program utility.
   Records guard patrol check-ins. */
int main()
{
	char comment[80];
	char cmd[120];
	fgets(comment, 80, stdin);
	sprintf(cmd, "echo '%s %s' >> reports.log", comment, now());
	/* [ADDED] The apostrophes around the %s %s is so echo gets it all as one 
	 * string argument 
	 * And remember, since we used fgets, it will actually end up reading "echo 
	 * '<comment_text>\n <timestamp>' >> reports.log"
	 */
	system(cmd);
	return 0;
}
