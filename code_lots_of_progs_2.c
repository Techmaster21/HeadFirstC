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
	printf("Feed with %2.2f lbs of %s and allow to %s for %2.2f hours\n",
	        a.care.food.weight, a.care.food.ingredients,
	        a.care.exercise.description, a.care.exercise.duration);
}

 struct cell_phone {
   int cell_no;
   const char * wallpaper;
   float minutes_of_charge;
 };
 ...
 struct cell_phone p = {5557879, "sinatra.png", 1.35};
 typedef struct cell_phone {
   int cell_no;
   const char * wallpaper;
   float minutes_of_charge;
 } phone;
 ...
 phone p = {5557879, "sinatra.png", 1.35};
 typedef struct {
   int cell_no;
   const char * wallpaper;
   float minutes_of_charge;
 } '''phone''';
 phone p = {5557879, "sinatra.png", 1.35};
 #include <stdio.h>
  
 _________ struct {
   float tank_capacity;
   int tank_psi;
   const char* suit_material;
 } ___________;
  
 _________ struct scuba {
   const char* name;
   equipment kit;
 } diver;
  
 void badge(_____ d)
 {
   printf("Name: %s Tank: %2.2f(%i) Suit: %s\n",
     d.name, d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material);
 }
  
 int main()
 {
   _______ randy = {"Randy", {5.5, 3500, "Neoprene"}};
   badge(randy);
   return 0;
 }
 #include <stdio.h>
  
 typedef struct {
   float tank_capacity;
   int tank_psi;
   const char* suit_material;
 } equipment;
  
 typedef struct scuba {
   const char* name;
   equipment kit;
 } diver;
  
 void badge(diver d)
 {
   printf("Name: %s Tank: %2.2f(%i) Suit: %s\n",
     d.name, d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material);
 }
  
 int main()
 {
   diver randy = {"Randy", {5.5, 3500, "Neoprene"}};
   badge(randy);
   return 0;
 }
