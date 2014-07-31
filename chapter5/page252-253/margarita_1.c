/* [ADDED] Note: If you want to redefine all the members of a struct at once 
 * after initializing it, there's only one way I know of to do so. You declare 
 * it like this: 
 * margarita m;
 * m = (margarita){2.0,1.0,{0.5}};
 * This particular method was added in C99.
 */
#include <stdio.h>

typedef union {
	float lemon;
	int lime_pieces;
} lemon_lime;

typedef struct {
	float tequila;
	float cointreau;
	lemon_lime citrus;
} margarita;

int main()
{
	margarita m = {2.0, 1.0, {2}}; 
	/* [ADDED] While the book doesn't seem to think so, .citrus.lemon=2 is valid 
	 * too. (In fact it's the same thing we did in apples.c)
	 */
	printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f " 
	       "measures of juice\n", m.tequila, m.cointreau, m.citrus.lemon);
	/* [ADDED] Having two strings without a ; between them as above simply tells 
	 * the compiler to concatenate (join together) the strings. This was done in
	 * this instance to abide by the 80-column rule - a coding convention that 
	 * you don't have to follow, but if you are going to have multiple people on 
	 * multiple different kinds of computers, it would be nice to do.
	 */ 
}
