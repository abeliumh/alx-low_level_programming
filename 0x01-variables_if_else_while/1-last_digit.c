#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - print if the number is zero, positive or negative
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n % 10) > 5)
printf("%s %d %s %d %s\n", "Last digit of", n, "is", n % 10, "and is greater than 5");
else if ((n % 10) == 5)
printf("%s %d %s %d %s\n", "Last digit of", n, "is", n % 10, "and is equal to 5");
else if ((n % 10) < 6)
printf("%s %d %s %d %s\n", "Last digit of", n, "is", n % 10, "and is less than 6 and not 0");
return (0);
}
