/* [ADDED] This application has been modified slightly from the original, mainly
 * to utilize the other functions which the book ignored. 
 * Also, in case you forgot (I know I did), Ascending is from top to bottom, 
 * smallest first and descending is top to bottom, largest first. Ascending is 
 * alphabetical order for characters.
 * 
 * Qsort by default sorts in ascending order. If this is confusing, let's think
 * in terms of the first function. If we return a number that is positive, that 
 * means that we consider score_a to be greater than score_b and want it to be 
 * placed after it. If we return a negative number, it means we consider score_a 
 * less than score_b and it should be placed before it.
 * 
 * If this still doesn't make sense, it may help to think of it not in terms of 
 * less than or greater than but in more simple terms: 
 * If we return a positive number, we want the first argument to come after the 
 * second. If we return a negative number, we want the first to come before the 
 * second. If we return a zero, we don't care what order they're in.
 * In order to make ascending order into descending order, we simply send the 
 * opposite of what we sent for ascending - the negative of the original value. 
 * Or, we can also flip-flop the variables a and b, which accomplishes the same 
 * end (What's the difference between 9 - 4 and 4 - 9?)
 */
/* [ADDED] Though apparently later omitted from the book, probably because they 
 * are not POSIX defined but rather native to BSD(A Unix based OS like Linux on 
 * which Mac OSX is based), there are two more sort functions available to you 
 * if you #include <bsd/stdlib.h>: mergesort() and heapsort(). They are passed 
 * the same arguments and differ only in their sorting algorithm. heapsort() is
 * generally considered useless, as it is slower than qsort(). The only 
 * advantage heapsort has over qsort is that heapsort uses almost no additional 
 * memory. Both heapsort and qsort are considered unstable. This means that if 
 * two elements are equal, heapsort and qsort will not necessarily leave them in 
 * their original order: They may switch their order around in the array. 
 * mergesort is stable. mergesort can also see faster sorting if the array has 
 * data that is already in a pre-existing order. mergesort requires the size of 
 * the objects to be sorted to be greater than sizeof(void *)/2. Generally 
 * speaking, qsort is the fastest followed by mergesort followed by heapsort.
 * mergesort() also allocates memory unlike the other two.
 * My apologies for the wall of text.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_scores(const void* score_a, const void* score_b)
{
	int a = *(int*)score_a;
	int b = *(int*)score_b;
	return a - b;
}

int compare_scores_desc(const void* score_a, const void* score_b)
{
	int a = *(int*)score_a;
	int b = *(int*)score_b;
	return b - a;
}

typedef struct {
	int width;
	int height;
} rectangle;

int compare_areas(const void* a, const void* b)
{
	rectangle* ra = (rectangle*)a;
	rectangle* rb = (rectangle*)b;
	int area_a = (ra->width * ra->height);
	int area_b = (rb->width * rb->height);
	return area_a - area_b;
}

int compare_names(const void* a, const void* b)
{
	char** sa = (char**)a;
	char** sb = (char**)b;
	return strcmp(*sa, *sb);
}

int compare_areas_desc(const void* a, const void* b)
{
	return compare_areas(b, a);
}

int compare_names_desc(const void* a, const void* b)
{
	return compare_names(b, a);
}

int main()
{
	int scores[] = {543,323,32,554,11,3,112};
	int i;
	
	qsort(scores, 7, sizeof(int), compare_scores);
	puts("These are the scores in ascending order:");
	for (i = 0; i < 7; i++) {
		printf("Score = %i\n", scores[i]);
	}
	qsort(scores, 7, sizeof(int), compare_scores_desc);
	puts("These are the scores in descending order:");
	for (i = 0; i < 7; i++) {
		printf("Score = %i\n", scores[i]);
	}
	/*-------------------------------------------------*/
	rectangle rectangles[] = {{4,5},{2,3},{4,4},{9,10},{6,4}};
	qsort(rectangles, 5, sizeof(rectangle), compare_areas);
	puts("These are the rectangles in ascending order by area:");
	for (i = 0; i < 5; i++) {
		printf("%ix%i\n", rectangles[i].width, rectangles[i].height);
	}
	qsort(rectangles, 5, sizeof(rectangle), compare_areas_desc);
	puts("These are the rectangles in descending order by area:");
	for (i = 0; i < 5; i++) {
		printf("%ix%i\n", rectangles[i].width, rectangles[i].height);
	}
	/*-------------------------------------------------*/
	char *names[] = {"Karen", "Mark", "Brett", "Molly"};

	qsort(names, 4, sizeof(char*), compare_names);
	puts("These are the names in ascending order:");
	for (i = 0; i < 4; i++) {
		printf("%s\n", names[i]);
	}
	qsort(names, 4, sizeof(char*), compare_names_desc);
	puts("These are the names in descending order:");
	for (i = 0; i < 4; i++) {
		printf("%s\n", names[i]);
	}
	return 0;
}
