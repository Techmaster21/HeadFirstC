/* [ADDED] This code has a slight issue, though it will compile without error 
 * or warning with standard gcc flags. It probably isn't that important, but 
 * technically the %p conversion character expects a void* but we are passing 
 * it a int*. A simple fix is to cast the address to a void* before passing it 
 * (You'll learn more about casting later, but for now just know that all you 
 * need to do is add (void*) before &x and &y to fix the warning)
 */
#include <stdio.h>

int y = 1;

int main()
{
	int x = 4;
	printf("x is stored at %p\n", &x);
	printf("y is stored at %p\n", &y);
	return 0;
}
