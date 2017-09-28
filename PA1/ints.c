// CS156 HW1
// Author: Alex Laswell
// Purpose: reads two numbers from the user 
// 	    and produces a few arguably-interesting 
// 	    facts about the numbers
// Input: two (2) integer numbers where abs(x) < 1000000
// Output: prints "Two numbers, please:\nDividing num1/num2:\nPos diff: diff\nDivisibile: x\n"
#include <stdio.h>
#include <stdlib.h>

int main() {
	long num1, num2;	// to store the user input
	
	// Prompt the user for the numbers
	// and read into the vars

	printf("Two numbers, please: ");
	scanf("%ld", &num1); 
	scanf("%ld", &num2); 

	//Divide
	if(num2 == 0)
		printf("Dividing %ld/%ld: against the rules.\n", num1, num2);
	else
		printf("Dividing %ld/%ld: %f\n", num1, num2, (float) num1/num2);

	//Diff
	printf("Pos diff: %ld\n", labs(num1-num2));

	//42?
	if(num1 == 42 || num2 == 42)
		printf("It's the answer!\n");

	//Divisible by 6
	if(num1 % 6 == 0) {
		if(num2 % 6 == 0)
			// both
			printf("Divisible: both\n");
		else // only num1
			printf("Divisible: only %ld\n", num1);
	}
	else if(num2 % 6 == 0) // only num2 
		printf("Divisible: only %ld\n", num2);
	else // neither
		printf("Divisible: neither\n");

	return 0;
}
