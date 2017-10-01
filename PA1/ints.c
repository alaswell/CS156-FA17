// CS156 HW1
// Author: Alex Laswell
// Created: 09-27-2017
// Purpose: reads two numbers from the user 
// 	    and produces a few, arguably-interesting, 
// 	    facts about the numbers
// Input: two (2) integer numbers where abs(x) < 1000000
// Output: "Two numbers, please:"
//   	   result of dividing first by second
// 	   positive difference of the two numbers
// 	   if either of the input numbers == 42
// 	   which numbers are divisible by six
#include <stdio.h>

int main() {
	long num1, num2;	// to store the user input

	// Prompt the user for the numbers
	// and read into the vars
	// has to be 2 scanf's for some reason? 

	printf("Two numbers, please: ");
	scanf("%ld", &num1);
	scanf("%ld", &num2);

	//Divide
	if(num2 == 0)
		printf("Dividing %ld/%ld: against the rules.\n", num1, num2);
	else
		printf("Dividing %ld/%ld: %lf\n", num1, num2, (double) num1/num2);

	//Absolute Differece
	if(num1 > num2)
		printf("Pos diff: %ld\n", num1-num2);
	else 
		printf("Pos diff: %ld\n", num2-num1);
	
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
