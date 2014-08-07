																																																																																																																																																																																						
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
