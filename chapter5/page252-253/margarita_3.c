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
	margarita m = {2.0, 1.0, {.lime_pieces=1}};
	/* [ADDED] You also could have put .citrus.lime_pieces=1 w/o the extra 
	 * brackets
	 */ 
	printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%i " 
	       "pieces of lime\n", m.tequila, m.cointreau, m.citrus.lime_pieces);
}
