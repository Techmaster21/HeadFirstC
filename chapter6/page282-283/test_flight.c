#include <stdio.h>
#include <stdlib.h>

typedef struct island {
	char* name;
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
	/* [ADDED] Notice that the code, when run, goes to a new line after printing
	 * the name. Why is that? Well, as I'm sure you noticed, we're using fgets, 
	 * and as I've mentioned previously, fgets stores the trailing newline you 
	 * leave behind from pressing enter. So the name array would look something 
	 * like this [A][t][l][a][n][t][i][s][\n][\0]. This is then printed as part 
	 * of the string and voila. Free newline.
	 */
}

island* create(char *name)
{
	island *i = malloc(sizeof(island));
	i->name = name;
	i->opens = "09:00";
	i->closes = "17:00";
	i->next = NULL;
	return i;
}
