#include <stdio.h>

typedef struct island {
	char* name;
	char* opens;
	char* closes;
	struct island * next;
} island;

void display();

int main()
{
	island amity = {"Amity", "09:00", "17:00", NULL};
	island craggy = {"Craggy", "09:00", "17:00", NULL};
	island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
	island shutter = {"Shutter", "09:00", "17:00", NULL};
	amity.next = &craggy;
	craggy.next = &isla_nublar;
	isla_nublar.next = &shutter;
	island skull = {"Skull", "09:00", "17:00", NULL};
	isla_nublar.next = &skull;
	skull.next = &shutter;
	display(&amity);
}

void display(island* start)
{
	island* i = start;
	/* [ADDED] I am not certain why the book declares a seperate pointer i.
	 * One could just as easily change remove the above and change all 
	 * references to i to start and the code would function perfectly. 
	 */
	for (; i != NULL; i = i->next) {
		printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
		/* [ADDED] If you want the output to look like in the book just change 
		 * printf so its format string is "Name: %s\nOpen: %s-%s\n" */
	}
}
