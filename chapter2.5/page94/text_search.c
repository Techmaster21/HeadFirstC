/* [ADDED COMMENT] The original code in the book does not work properly because
 * fgets writes the trailing newline('\n') to the variable, and so strstr,
 * instead of trying to find your input in tracks[i], it tries to find your
 * input + \n which it will never find because we included no '\n's in the
 * tracks array. A workaround has been provided. You could also just use scanf
 * (Which has the opposite also annoying behavior of leaving unread input
 * floating around... Neither function is ideal tbh, but there are no
 * useful alternatives as far as I know)
 */

#include <stdio.h>
#include <string.h>

char tracks[][80] = {
	"I left my heart in Harvard Med School",
	"Newark, Newark - a wonderful town",
	"Dancing with a Dork",
	"From here to maternity",
	"The girl from Iwo Jima",
};

void find_track(char search_for[]) 
{
	int i;
	for (i = 0; i < 5; i++) {
		if (strstr(tracks[i], search_for))
			printf("Track %i: '%s'\n", i, tracks[i]);
	}
}

int main()
{
	char search_for[80];
	printf("Search for: ");
	fgets(search_for, 80, stdin);
	/*Begin workaround*/
	size_t ln = strlen(search_for) - 1;
	if (search_for[ln] == '\n')
		search_for[ln] = '\0';
	/*End workaround*/
	find_track(search_for);
	return 0;
}
