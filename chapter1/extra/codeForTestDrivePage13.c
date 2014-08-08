/* [ADDED] I don't know where this code comes from, but it was included in the 
 * extracted code, so I decided to keep it as it demonstrates some of the 
 * concepts learned in the first chapter.
 * It does not need to include stdlib. It uses nothing from it.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int stock = 180;
	int order;
	while(stock > 0) {
		printf("%i glasses left\n", stock);
		scanf("%i", &order);

		stock = stock - order;
		printf("You ordered %i glasses\n", order);
	}
	puts("We're out of stock, baby!");
	return 0;
}
