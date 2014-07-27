/******************************************************************************
 * [ADDED COMMENT] Note that the book included the line #include "encrypt.h"
 * here. It has been removed because it is not necessary in this case. Nothing 
 * within encrypt.c had to be made aware of the existence of the encrypt 
 * function (For indeed, that is the only function in the file). 
 * 
 * If instead, for example, we had another function before encrypt() in the 
 * encrypt.c file that tried to call encrypt(), we would run into the same
 * issue as we did when totaller.c was rearranged.
 *
 * Also note that the book included "char c;" which was also removed because it 
 * was not used
 ******************************************************************************/

void encrypt(char *message)
{
	while (*message) {
		*message = *message ^ 31;
		message++;
	}
}
