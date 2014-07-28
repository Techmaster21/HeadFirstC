#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("The value of INT_MAX is %i\n", INT_MAX);
	printf("The value of INT_MIN is %i\n", INT_MIN);
	printf("An int takes %zi bytes\n", sizeof(int));
	/* [ADDED] The above was %z in the book, but z is just a length
	 * modifier for size_t type and needs to be followed by an integer 
	 * conversion character. With just %z it just outputs "An int takes % bytes"
	 */
	printf("The value of FLT_MAX is %f\n", FLT_MAX);
	printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
	printf("A float takes %zi bytes\n", sizeof(float));
	return 0;
}
