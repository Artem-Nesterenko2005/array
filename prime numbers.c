#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int array[5];
	int symbolNumber = 0;
	int counter = 0;
	srand(time(0));
	printf("Array numbers - ");
	for (symbolNumber; symbolNumber < 5; symbolNumber++)
	{
		array[symbolNumber] = rand() % 3;
		printf("%d, ", array[symbolNumber]);
	}
	symbolNumber = 0;
	for (symbolNumber; symbolNumber < 5; symbolNumber++)
	{
		if (array[symbolNumber] == 0)
			counter = counter + 1;
	}
	printf("\nNumber of zeroes - %d", counter);
}