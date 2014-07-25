/* [ADDED COMMENT] Notice that the version in the book includes stdlib.h
 * while this does not. This is because there is nothing in the program
 * that requires it and thus it is unnecessary to include it
 */
#include <stdio.h>
#include <string.h>

int main()
{
	char line[80];
	FILE *in = fopen
