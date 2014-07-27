#include <stdio.h>
#include <unistd.h>
#include "launch.h"
#include "thruster.h"

int main() 
{
	countdown();
	final_sequence();
	liftoff();
	return 0;
}

void countdown() 
{
	int i;
	puts("Ten seconds to lift off:");
	for(i = 10; i > 0; i--) {
		printf("%i\n", i);
		sleep(1);
	}
}

void liftoff()
{
	puts("We have achieved liftoff");
}
	
