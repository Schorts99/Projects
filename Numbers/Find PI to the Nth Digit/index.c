/* Enter a number and have the program generate PI up to that many decimal places. 
 Keep a limit to how far the program will go. */

#include <stdio.h>

int get_fibonacci_number(int number) {
	if(number == 0 || number == 1) return number;
	else return get_fibonacci_number(number-1) + get_fibonacci_number(number-2);
}

int fibbonacci(int limit) {
	for (int index = 0; index < limit; ++index) {
		printf("%i\n", get_fibonacci_number(index));
	}
}

int main() {
	int limit;
	printf("Enter the number of numbers of the serie to generate: ");
	scanf("%i", &limit);
	printf("\n");
	fibbonacci(limit);
	return 0;
}
