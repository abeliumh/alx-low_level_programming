#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	printf("%s %d %s %d %s\n", "Last digit of", n, "is", n % 10, "is greater than 5");
   else if ((n % 10) == 5)
    printf("%s %d %s %d %s\n", "Last digit of", n, "is", n % 10, "is equal to 5");
   else if ((n % 10) < 6)
    printf("%s %d %s %d %s\n", "Last digit of", n, "is", n % 10, "is less than 5");
	return (0);
}
