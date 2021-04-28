#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printRandoms(int lower, int upper,
							int count)
{
	int i;
	for (i = 0; i < count; i++) {
		int num = (rand() %
		(upper - lower + 1)) + lower;
		printf("%d ", num);
	}
}
int main()
{
	int lower,upper, count = 1;
	printf("Enter the lower and upper number:-\n");
	scanf("%d%d",&lower,&upper);
	srand(time(0));

	printRandoms(lower, upper, count);
	return 0;
}

