 Delfino Isle
 Angel Island
 Wild Cat Island
 Neri's Island
 Great Todday
 ...
 island amity = {"Amity", "09:00", "17:00", NULL};
 island craggy = {"Craggy", "09:00", "17:00", NULL};
 island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
 island shutter = {"Shutter", "09:00", "17:00", NULL};
 #include <stdlib.h>
 ...
 malloc(sizeof(island));
 island* p = (island*)malloc(sizeof(island));
 free(p);
 island* create(char* name)
 {
   island* i = (island*)malloc(sizeof(island));
   i->name = name;
   i->opens = "09:00";
   i->closes = "17:00";
   i->next = NULL;
   return i;
 }
 island* create(char* name)
 {
   island* i = (island*)malloc(sizeof(island));
   i->name = name;
   i->opens = "09:00";
   i->closes = "17:00";
   i->next = NULL;
   return i;
 }
  char name[80];
  fgets(name, 79, stdin);
  island* p_island0 = create(name);
 $ ./test_flight
 Atlantis
  fgets(name, 79, stdin);
  island* p_island1 = create(name);
  p_island0->next = p_island1;
 Titchmarsh Island
  display(p_island0);
 Name: Titchmarsh Island
  open: 09:00-17:00
 Name: Titchmarsh Island
  open: 09:00-17:00
 ________________________________________
 island* create(char* name)
 {
   island* i = (island*)malloc(sizeof(island));
   i->name = name;
   i->opens = "09:00";
   i->closes = "17:00";
   i->next = NULL;
   return i;
 }
  char name[80];
  fgets(name, 79, stdin);
  island* p_island0 = create(name);
  fgets(name, 79, stdin);
  island* p_island1 = create(name);
 Both islands share the same name string
       +-------------------+                                +----------------------+
       |                   |                                |                      |
       |   island0         |                                |     island1          |
       |                   |                                |                      |
       |                   |                                |                      |
       +-----------+-------+                              --+----------------------+
                   |                                -----/
                   |                          -----/
                   |                    -----/
                   |              -----/
                   |        -----/
                   |  -----/
                   +-/
                   V
                 |---+---+---+---+---+---+---+---+---+---+---+---+---+-----|
                 |   |   |   |   |   |   |   |   |   |   |   |   |   | ... |
                 |---+---+---+---+---+---+---+---+---+---+---+---+---+-----|
 char* s = "MONA LISA";
 |---+---+---+---+---+---+---+---+---+----|
 | M | O | N | A |   | L | I | S | A | \0 |
 |---+---+---+---+---+---+---+---+---+----|
 char* copy = strdup(s);
 island* create(char* name)
 {
   island* i = (island*)malloc(sizeof(island));
   i->name = '''strdup(name)''';
   i->opens = "09:00";
   i->closes = "17:00";
   i->next = NULL;
   return i;
 }
 ./test_flight
 Atlantis
 Titchmarsh Island
 Name: Atlantis
  open: 09:00-17:00
 Name: Titchmarsh Island
  open: 09:00-17:00
  island* start = NULL;
  island* i = NULL;
  island* next = NULL;
  char name[80];
  for(; ______________________ != ________________; i = ________) {
    next = create(name);
    if (start == NULL)
      start = ______;
    if (i != NULL)
      i ___ ______ = next;
  }
  display(start);
 fgets(name, 79, stdin)
 NULL
 next
 next
 next
 ->
 .
 NULL
  island* start = NULL;
  island* i = NULL;
  island* next = NULL;
  char name[80];
  for(; fgets(name, 79, stdin) != NULL; i = next) {
    next = create(name);
    if (start == NULL)
      start = next;
    if (i != NULL)
      i->next = next;
  }
  display(start);
 .
 NULL
 void release(island* start)
 {
   island* i = start;
   island* next = NULL;
   for (; i != NULL; i = next) {
     next = ________________;
     _____________________;
     _____________________;
   }
 }
 void release(island* start)
 {
   island* i = start;
   island* next = NULL;
   for (; i != NULL; i = next) {
     next = i->next;
     free(i->name);
     free(i);
   }
 }
 display(start);
 release(start);
 ./tour < trip1.txt
 Name: Delfino Isle
  Open: 09:00-17:00
 Name: Angel Island
  Open: 09:00-17:00
 Name: Wild Cat Island
  Open: 09:00-17:00
 Name: Neri's Island
  Open: 09:00-17:00
 Name: Great Todday
  Open: 09:00-17:00
 Name: Ramita de la Baya
  Open: 09:00-17:00
 Name: Island of the Blue Dolphins
  Open: 09:00-17:00
 Name: Fantasy Island
  Open: 09:00-17:00
 Name: Farne
  Open: 09:00-17:00
 Name: Isla de Muerta
  Open: 09:00-17:00
 Name: Tabor Island
  Open: 09:00-17:00
 Name: Haunted Isle
  Open: 09:00-17:00
 Name: Sheena Island
  Open: 09:00-17:00
