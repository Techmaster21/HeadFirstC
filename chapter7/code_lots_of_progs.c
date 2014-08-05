 Q: Which is the best sort to use? The quicksort, mergesort or heapsort?
 A: It depends on how ''unsorted'' the data is. Most of the time the different sorts will perform about the same.
 Q: I don't understand the comparator function for the array of strings. What does "char**" mean?
 A: Each item in a string array is a char-pointer (char*). When quicksort calls the comparator function, it sends pointers to 2 elements in the arrays. That means the comparator receives two pointers-to-pointers-to-char. In C notation, each value is a char**.
 Q: OK, but when we call the strcmp function, why does the code say strcmp(*a, *b)? Why not strcmp(a, b)?
 A: a and b are of type char**. The strcmp function needs values of type char*.
 Q: Why does my head hurt?
 A: Don't worry about it. Pointers are really difficult to use sometimes. If you don't find them a little confusing, it probably means you are thinking enough about them.
 enum response_type {DUMP, SECOND_CHANCE, MARRIAGE};
 
 typedef struct {
   char* name;
   enum response_type type;
 } response;
 void dump(response r)
 {
   printf("Dear %s,\n", r.name);
   puts("Unfortunately your last date contacted us to");
   puts("say that they will not be seeing you again");
 }
 void second_chance(response r)
 {
   printf("Dear %s,\n", r.name);
   puts("Good news: your last date has asked us to");
   puts("arrange another meeting. Please call ASAP.");
 }
 void marriage(response r)
 {
   printf("Dear %s,\n", r.name);
   puts("Congratulations! Your last date has contacted");
   puts("us with a proposal of marriage");
 }
 int main()
 {
   response r[] = {
     {"Mike", DUMP}, {"Luis", SECOND_CHANCE},
     {"Matt", SECOND_CHANCE}, {"William", MARRIAGE}
   };
   int i;
   for (i = 0; i < 4; i++) {
     switch(___________) {
     case _______________:
       dump(________);
       break;
     case ___________________:
       second_chance(_________);
       break;
     default:
       marriage(___________);
     }
   }
   return 0;
 }
 r[i].type
 DUMP
 SECOND_CHANCE
 r[i]
 r[i]
 r[i]
 r[i].name
 r[i].name
 r[i].name
 dump
 second_chance
 int main()
 {
   response r[] = {
     {"Mike", DUMP}, {"Luis", SECOND_CHANCE},
     {"Matt", SECOND_CHANCE}, {"William", MARRIAGE}
   };
   int i;
   for (i = 0; i < 4; i++) {
     switch(r[i].type) {
     case DUMP:
       dump(r[i]);
       break;
     case SECOND_CHANCE:
       second_chance(r[i]);
       break;
     default:
       marriage(r[i]);
     }
   }
   return 0;
 }
 r[i].name
 r[i].name
 r[i].name
 dump
 second_chance
 ./send_dear_johns
 Dear Mike,
 Unfortunately your last date contacted us to
 say that they will not be seeing you again
 Dear Luis,
 Good news: your last date has asked us to
 arrange another meeting. Please call ASAP.
 Dear Matt,
 Good news: your last date has asked us to
 arrange another meeting. Please call ASAP.
 Dear William,
 Congratulations! Your last date has contacted
 us with a proposal of marriage
 >
    switch(r.type) {
    case DUMP:
      dump(r);
      break;
    case SECOND_CHANCE:
      second_chance(r);
      break;
    default:
      marriage(r);
    }
 replies[] = {dump, second_chance, marriage};
 void (*replies[])(response) = {dump, second_chance, marriage};
 |------+----+---------+----+---+---+----------+---|
 | void | (* | replies | [] | ) | ( | response | ) |
 |------+----+---------+----+---+---+----------+---|
 enum response_type {DUMP, SECOND_CHANCE, MARRIAGE};
 replies[SECOND_CHANCE] == second_chance
 void (*replies[])(response) = {dump, second_chance, marriage};
 
 int main()
 {
   response r[] = {
     {"Mike", DUMP}, {"Luis", SECOND_CHANCE},
     {"Matt", SECOND_CHANCE}, {"William", MARRIAGE}
   };
   int i;
   for (i = 0; i < 4; i++) {
     ___________________________________
   }
   return 0;
 }
 void (*replies[])(response) = {dump, second_chance, marriage};
 
 int main()
 {
   response r[] = {
     {"Mike", DUMP}, {"Luis", SECOND_CHANCE},
     {"Matt", SECOND_CHANCE}, {"William", MARRIAGE}
   };
   int i;
   for (i = 0; i < 4; i++) {
     (replies[r[i].type])(r[i]);
   }
   return 0;
 }
 |---+----------+-----------+---+----+------+----|
 | ( | replies[ | r[i].type | ] | )( | r[i] | ); |
 |---+----------+-----------+---+----+------+----|
 > ./dear_johns
 Dear Mike,
 Unfortunately your last date contacted us to
 say that they will not be seeing you again
 Dear Luis,
 Good news: your last date has asked us to
 arrange another meeting. Please call ASAP.
 Dear Matt,
 Good news: your last date has asked us to
 arrange another meeting. Please call ASAP.
 Dear William,
 Congratulations! Your last date has contacted
 us with a proposal of marriage
 > 
     (replies[r[i].type])(r[i]);
 enum response_type {DUMP, SECOND_CHANCE, MARRIAGE, LAW_SUIT};
 void (*replies[])(response) = {dump, second_chance, marriage, law_suit};
 Q: Why is the function pointer array syntax so complex?
 A: Because when you declare a function pointer you need say what the return and parameter types. That's why there are so many parentheses.
 Q: This looks a little like the sort of object-oriented code in other languages. Is it?
 A: It's similar. Object-oriented languages associate a set of functions (called methods) with pieces of data. In the same way, you can use function pointers so associate functions with pieces of data.
 Q: Hey - so does that mean that C is object-oriented? Wow - that's awesome.
 A: No. C is not object-oriented, but other languages that are built on C, like Objective-C and C++, create a lot of their object-oriented features by using function pointers under the covers.
 printf("%i bottles of beer on the wall, %i bottles of beer\n", 99, 99);
 printf("Take one down and pass it around, ");
 printf("%i bottles of beer on the wall\n", 98);
 enum drink {
   MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE
 };
 double price(enum drink d)
 {
   switch(d) {
   case MUDSLIDE:
     return 6.79;
   case FUZZY_NAVEL:
     return 5.31;
   case MONKEY_GLAND:
     return 4.82;
   case ZOMBIE:
     return 5.89;
   }
   return 0;
 }
 price(ZOMBIE)
 total(3, ZOMBIE, MONKEY_GLAND, FUZZY_NAVEL)
  print_ints(3, 79, 101, 32);
 #include <stdarg.h>
 void print_ints(int args, ...)
 {
 va_list ap;
 va_start(ap, args);
  int i;
  for (i = 0; i < args; i++) {
    printf("argument: %i\n", va_arg(ap, int));
  }
  va_end(ap);
 }
  print_ints(3, 79, 101, 32);
 Q: Wait - why are va_end() and va_start() called "macros"? Aren't they just normal functions.
 A: No - they are designed to look like ordinary functions, but actually they are replaced by the precompiler with other code.
 Q: And the precompiler is...?
 A: The precompiler runs just before the compilation step. Amongst other things, the precompiler includes the headers into the code.
 Q: Can I have a function with *just* variable arguments - and no variable arguments at all?
 A: No. You need to have at least one fixed argument in order to pass its name to va_start().
 Q: What happens if I try to read more arguments from va_arg() than have been passed in.
 A: Random errors will occur.
 Q: That sounds bad.
 A: Pretty bad.
 Q: What if I try to read an int argument as a double, or something?
 A: Random errors will occur.
   printf("Price is %.2f\n", total(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL));
 double total(int args, ...)
 {
   double total = 0;
   ____________________________________________
   ____________________________________________
   ____________________________________________
   ____________________________________________
   ____________________________________________
   ____________________________________________
   ____________________________________________
   ____________________________________________
   return total;
 }
   printf("Price is %.2f\n", total(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL));
 double total(int args, ...)
 {
   double total = 0;
   va_list ap;
   va_start(ap, args);
   int i;
   for(i = 0; i < args; i++) {
     enum drink d = va_arg(ap, enum drink);
     total += price(d);
   }
   va_end(ap);
   return total;
 }
 main(){
   printf("Price is %.2f\n", total(2, MONKEY_GLAND, MUDSLIDE));
   printf("Price is %.2f\n", total(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL));
   printf("Price is %.2f\n", total(1, ZOMBIE));
   return 0;
 }
 > ./price_drinks
 Price is 11.61
 Price is 16.92
 Price is 5.89
 > 
