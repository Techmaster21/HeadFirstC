/* [ADDED] If you get an error involving getopt, optind, and optarg, please see 
 * the relevant note about this file in C90-Compatibility.txt
 */
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) /* [ADDED] Note that the names of the variables
                                  * is arbitrary.*/
{
	char *delivery = "";
	int thick = 0;
	int count = 0;
	char ch;
	while ((ch = getopt(argc, argv, "d:t")) != EOF)
		switch (ch) {
			case 'd':
				delivery = optarg;
				break;
			case 't':
				thick = 1;
				break;
			default:
				fprintf(stderr, "Unknown option: '%s'\n", optarg);
				return 1;
		}

	argc -= optind;
	argv += optind;

	if (thick)
		puts("Thick crust.");

	if (delivery[0])
		printf("To be delivered %s.\n", delivery);

	puts("Ingredients:"); 
	for (count = 0; count < argc; count++)
		puts(argv[count]);
	return 0;
}
