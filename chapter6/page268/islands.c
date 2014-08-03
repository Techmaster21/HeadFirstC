#include <stdio.h>

typedef struct {
	char *name;
	char *opens;
	char *closes;
} island;

int main()
{
	int i;
	island tour[4] = {
	                  {"Amity", "09:00", "17:00"},
	                  {"Craggy", "09:00", "17:00"},
	                  {"Isla Nublar", "09:00", "17:00"},
	                  {"Shutter", "09:00", "17:00"}
	                 };
	for (i=0; i<4; i++)
		printf("Name: %s\nOpens: %s\nCloses: %s\n",
		       tour[i].name, tour[i].opens, tour[i].closes);
}
