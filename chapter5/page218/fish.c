#include <stdio.h>

void catalog(const char*, const char*, int, int);
void label(const char*, const char*, int, int);

int main()
{
	catalog("Snappy", "Piranha", 69, 4);
	label("Snappy", "Piranha", 69, 4);
	return 0;
}

void catalog(const char* name, const char* species, int teeth, int age)
{
	printf("%s is a %s with %i teeth. He is %i\n",
	        name, species, teeth, age);
	/* Notice the above lists in order, name, species, teeth, age, while the 
	 * below lists name, species, age, teeth, yet the variable order remains 
	 * unchanged in the book, causing a contradiction. On the next page, they 
	 * qualify that his age is 4 and his number of teeth 69. I have changed the 
	 * order of the second printf to reflect this.
	 */
}

void label(const char* name, const char* species, int teeth, int age)
{
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n",
	        name, species, age, teeth);
}
