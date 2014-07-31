#include <stdio.h>

typedef union {
	float weight;
	int count;
} cupcake;

int main()
{
	cupcake order = {2};
	printf("Cupcakes quantity: %i\n", order.count);
	return 0;
}

/* [ADDED] Geek bits: Why 1073741824? (Assuming you aren't on one of the few 
 * machines where float is actually not 32 bits)
 * This is because 2 in floating point binary notation is represented by:
 * 01000000000000000000000000000000 (Thats 01 and 30 zeros if you don't care to 
 * count them), However if we were to try and read that like a normal integer, 
 * we would read it as 2^30, which is exactly 1073741824
 */
