# Notes about make: You can call these targets independently by just using
# "make target" (where target is, you guessed it, the target you want to make.
# If you included the launch target at the beginning, you could simply type
# "make" and it would execute the first instruction, which would end up 
# executing all the others anyway. Alternatively, you could include an 'all' 
# target (or call it whatever you want but all is standard) at the beginning 
# that just calls all the other targets like so: all: foo.o bar.o foobar

launch.o: launch.c launch.h thruster.h
	gcc -c launch.c

thruster.o: thruster.h thruster.c
	gcc -c thruster.c

launch: launch.o thruster.o
	gcc launch.o thruster.o -o launch
