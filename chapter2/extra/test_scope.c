/* [ADDED] This code does not exist in the book, thus for clarity I
 * will explain its function (Comments explain preceeding code)
 *
 * Note: the cast to char* was added to the code from the original source. It 
 * was added because it otherwise produced a warning because comparison of 
 * string literals produces undefined behavior. It worked as it was supposed 
 * to, but the cast to char* makes it clear to the compiler that we want to 
 * compare the addresses not the strings themselves.
 */

#include <stdio.h>

char * get_message() {
	char * msg = "Aren't pointers fun?";
	printf("msg address = %p\n", msg);
	return msg;
}

int main() {
	char * string = get_message(); 
	char * s0 = "Aren't pointers fun?";
	char s1[] = "Aren't pointers fun?";
	/*Calls the function get_message() which will declare a pointer to a
	  string literal, msg, and assign it a string, print its address, then
	  return an address to a string and store it in the pointer 'string'*/
	printf("Address = %p\n", string);
	/*Print address held by string. This should be the same as the address
	  held by msg since they point to the same string literal*/
	printf("Address = %p\n", "Aren't pointers fun?");
	/*Print address of the string literal, which should again be the same*/
	if (s0 == (char*)"Aren't pointers fun?")
		/*If the address held by char pointer s0 is equivalent to the address
		  of the string literal then print the following*/
		puts("The C compiler reused the string");
	if (s1 == (char*)"Aren't pointers fun?")
		/*If the address of the array is the same as the string literal then
		  print the following. This should not happen, as the array should copy
		  the string literal into its own address so it can be manipulated*/
		puts("The C compiler reused the string in an array - I DON'T BELIEVE IT!");
	puts(string);
	return 0;
}
