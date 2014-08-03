/* [ADDED] The book is correct in that you wouldn't have the same issue if you 
 * changed the struct to store a character array instead. However, you would 
 * have a different issue and would have to rewrite part of the create function 
 * to make it work. I have marked this bit of code with 
 * Changed [note] 
 * [code] 
 * Changed
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct island {
	char name[80];
	char* opens;
	char* closes;
	struct island * next;
} island;

void display();
island* create();

int main()
{
	char name[80];
	fgets(name, 80, stdin);
	island *p_island0 = create(name);
	display(p_island0);
	fgets(name, 80, stdin);
	island *p_island1 = create(name);
	p_island0->next = p_island1;
	display(p_island0);
}

void display(island* start)
{
	island* i = start;
	for (; i != NULL; i = i->next) {
		printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
	}
}

island* create(char *name)
{
	island *i = malloc(sizeof(island));
	/* Changed so that it loops through and changed the characters one by one 
	 * because array variables cannot be reassigned as a whole. Yes, I am 
	 * refering to a pointer like it's an array. You can do that! Neat, huh?
	 * It's sure a lot nicer than writing *(name + n)
	 */
	int n = 0;
	while(name[n] != '\0') {
		i->name[n] = name[n];
		n++;
	}
	/* Changed */
	i->opens = "09:00";
	i->closes = "17:00";
	i->next = NULL;
	return i;
}
