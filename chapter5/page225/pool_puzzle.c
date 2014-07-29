#include <stdio.h>

struct fish {
	const char *name;
	const char *species;
	int teeth;
	int age;
};
/* [ADDED] Note that the struct type fish must be located outside of any 
 * function so that the functions that call it can all be aware of the 
 * structure.
 */ 
void label(struct fish f);
void catalog(struct fish f);

int main()
{
	struct fish snappy = {"Snappy", "Piranha", 69, 4};
	catalog(snappy);
	label(snappy);
	return 0;
}

void catalog(struct fish f)
{
	printf("%s is a %s with %i teeth. He is %i\n",
	        f.name, f.species, f.teeth, f.age);
}

void label(struct fish f)
{
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",
	        f.name, f.species, f.age, f.teeth);
}
