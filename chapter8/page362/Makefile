# Remember, If you want to be able to just type 'make'instead of 'make 
# bank_vault'(Which is pretty standard), either put the bank_vault target first 
# or include an all(name arbitrary but all is typically the standard) target 
# first that depends on all the others.

encrypt.o: encrypt.c
	gcc -c encrypt.c -o encrypt.o

checksum.o: checksum.c
	gcc -c checksum.c -o checksum.o

libhfsecurity.a: encrypt.o checksum.o
	ar -rcs libhfsecurity.a encrypt.o checksum.o

bank_vault: bank_vault.c libhfsecurity.a
	gcc bank_vault.c -I. -L. -lhfsecurity -o bank_vault
