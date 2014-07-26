float add_with_tax(float f);
/* Extra info about this: This is known as a function declaration with a
 * prototype, the prototype being the declaration of the parameter type and
 * variable name "float f". In practice, only the type matters.
 * You can just as easily have added "float add_with_tax();" to this header file
 * and everything would have worked exactly as expected. So why add prototypes?
 * Well, prototyping allows the compiler to generate an error if you try to call
 * the function without proper parameters. Like "add_with_tax();" would generate
 * a compiler error because you haven't provided it any float to work with.
*/
