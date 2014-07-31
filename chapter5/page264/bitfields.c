#include <stdio.h>

typedef struct {
	unsigned int first_visit:1;
	unsigned int come_again:1;
	unsigned int fingers_lost:4;
	unsigned int shark_attack:1;
	unsigned int days_a_week:3;
} survey;

int main()
{
	survey s = {1, 1, 10, 1, 7};
	printf("Value of first_visit: %i\n", s.first_visit);
	printf("Value of come_again: %i\n", s.come_again);
	printf("Value of fingers_lost: %i\n", s.fingers_lost);
	printf("Value of shark_attack: %i\n", s.shark_attack);
	printf("Value of days_a_week: %i\n", s.days_a_week);
	s.days_a_week = 9;
	/* [ADDED] Uhoh, that number can't fit in 3 bits... */
	printf("Value of days_a_week overflow: %i\n", s.days_a_week);
	return 0;
}
