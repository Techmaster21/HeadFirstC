/*[ADDEDS] This code does not exist in the book, thus for clarity I
 * will explain its function (Comments explain preceeding code)
 */

#include <stdio.h>

char * get_message() {
	char * msg = "Aren't pointers fun?";
	printf("msg address = %p\n", msg);
	return msg;
}

int main() {
	char * string = get_message(); 
	/*Calls the function get_message() which will declare a pointer to a
	  string literal, msg, and assign it a string, print its address, then
	  return an address to a string and store it in the pointer 'string'*/
	printf("Address = %p\n", string);
	/*Print address held by string. This should be the same as the address
	  held by msg since they point to the same string literal*/
	printf("Address = %p\n", "Aren't pointers fun?");
	/*Print address of the string literal, which should again be the same*/
	char * s0 = "Aren't pointers fun?";
	char s1[] = "Aren't pointers fun?";
	if (s0 == "Aren't pointers fun?")
		/*If the address held by char pointer s0 is equivalent to the address
		  of the string literal then print the following*/
		puts("The C compiler reused the string");
	if (s1 == "Aren't pointers fun?")
		/*If the address of the array is the same as the string literal then
		  print the following. This should not happen, as the array should copy
		  the string literal into its own address so it can be manipulated*/
		puts("The C compiler reused the string in an array - I DON'T BELIEVE IT!");
	puts(string);
	return 0;
}
