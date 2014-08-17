#include <unistd.h>

int main()
{
	char *my_env[] = {"JUICE=peach and apple", (char*)NULL};
	execle("diner_info", "diner_info", "4", (char*)NULL, my_env);
	return 0;
}
