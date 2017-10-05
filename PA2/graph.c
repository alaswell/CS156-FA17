// CS156 HW2
// Author: Alex Laswell
// Created: 10-4-2017
// Purpose: reads five numbers from the user 
// 	    and produces a bar graph of the  
// 	    indicated values
// Input: five (5) integer numbers where abs(x) < 1000000
// Output: "Two numbers, please:"
//   	   result of dividing first by second
// 	   positive difference of the two numbers
// 	   if either of the input numbers == 42
// 	   which numbers are divisible by six
#include <stdio.h>

int main() {
	const char* crops[5]  = {"Beans", "Carrots", "Lettuce", "Peas", "Squash"};
	int pounds[5];

	for(int i = 0; i < 5; i++) {
		printf("Pounds of %s", crops[i]);
		scanf("%d", &pounds[i]);
	}

	int i = 0;
	while(i < 5) {
		printf("%s:", crops[i]);
		printf("\t");
		int j = 0;
		do {
			printf("%c", crops[i][0]);
			
		} while(++j < pounds[i]);
	printf("\n");
	i++;
	}
}	
