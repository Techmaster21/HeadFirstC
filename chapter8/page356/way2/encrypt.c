#include "/my_header_files/encrypt.h"

void encrypt(char *message)
{
	while (*message) {
		*message = *message ^ 31;
		message++;
	}
}
