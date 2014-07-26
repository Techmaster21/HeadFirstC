#include <stdio.h>

int main()
{
	int x = 100000;
	short y = x;
	printf("The value of y = %hi\n", y);
}

/* [ADDED COMMENT] Extended Geek Bits: Specifically the reason why it displays
 * -31072 is because computers use a system called two's compliment to represent 
 * negative numbers in binary while making all arithmetic automagically work 
 * without having to add extra rules(Like subtraction). To put a binary number 
 * into two's compliment you simply invert the bits (All 1s become 0s and vice 
 * versa) and add 1. To put a number in two's compliment into standard binary 
 * you simply perform the same proceedure.
 * 
 * 1000 0110 1010 0000 = -31072 and you can check this by inverting the bits to 
 * get 0111 1001 0101 1111 and adding one to get 0111 1001 0110 0000 = 0*2^0 + 
 * 0*2^1 + 0*2^2 + 0*2^3 + 0*2^4 + 1*2^5 + 1*2^6 + 0*2^7 + 1*2^8 + 0*2^9 + 
 * 0*2^10 + 1*2^11 + 1*2^12 + 1*2^13 + 1*2^14 + 0*2^15 = 31072
 */
