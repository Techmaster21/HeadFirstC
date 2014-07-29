#include <stdio.h>

struct exercise {
	const char* description;
	float duration;
};
 
struct meal {
	const char* ingredients;
	float weight;
};
 
struct preferences {
	struct meal food;
	struct exercise exercise;
};
 
struct fish {
	const char* name;
	const char* species;
	int teeth;
	int age;
	struct preferences care;
};

void label(struct fish a);

int main()
{
	struct fish snappy = {"Snappy", "Piranha", 69, 4, {{"meat", 0.2},
	                     {"swim in the jacuzzi", 7.5}}};
	label(snappy);	
}

void label(struct fish a)
{
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",
	        a.name, a.species, a.age, a.teeth); 
/* [ADDED] The specification %2.2f means print a minimum of 2 digits (Pad the
 * left or right with zeros to enforce) with a precision (digits after the 
 * decimal) of 2
 */
	printf("Feed with %2.2f lbs of %s and allow to %s for %2.2f hours\n",
	        a.care.food.weight, a.care.food.ingredients,
	        a.care.exercise.description, a.care.exercise.duration);
}
