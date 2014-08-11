#include "encrypt.h"
/* [ADDED] As I've mentioned before, you really don't need to include the header
 * in this file or checksum.c, just the one that will be using it unless there's
 * another function in this file that calls the encrypt function before the 
 * compiler knows about it, or if you just want to make sure you call it 
 * properly, taking advantage of function prototypes (Again only applicable if 
 * there was another function here)
 * Still, it isn't bad practice to do so even if it is uneccesary. Strangely 
 * enough, it doesn't seem to affect the compiled code in the slightest, at 
 * least not in gcc
 */

void encrypt(char *message)
{
	while (*message) {
		*message = *message ^ 31;
		message++;
	}
}
