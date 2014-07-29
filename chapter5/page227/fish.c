#include <stdio.h>

struct preferences {
	const char *food;
	float exercise_hours;
};
/* [ADDED] It seems that struct preferences must be declared before it is 
 * referenced to in struct fish. This is because otherwise it would be creating 
 * an instance of a yet undefined struct, therefore it has no way of knowing 
 * how to make the struct or how large to make it. Why it cannot allow a 
 * variable size struct like it now can with variable size arrays, I do not 
 * know. Perhaps because of the differences in types inherent in structs. 
 */

struct fish {
	const char *name;
	const char *species;
	int teeth;
	int age;
	struct preferences care;
};

void label(struct fish f);
void catalog(struct fish f);

int main()
{
	/* [ADDED] Also note: struct types (such as 'fish') do not appear to 
	 * conflict with local variables, i.e. I can have an integer variable called 
	 * fish apparently without issue. Same with variables inside structs, such 
	 * as 'name'. Specific instances of structs (e.g. 'snappy') do conflict.
	 */
	struct fish snappy = {"Snappy", "Piranha", 69, 4, {"Meat", 7.5}};
	catalog(snappy);
	label(snappy);
	printf("Snappy likes to eat %s\n", snappy.care.food);
	printf("Snappy likes to exercise for %f hours\n",
	       snappy.care.exercise_hours);
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
