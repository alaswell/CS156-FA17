// CS156    HW2
// Author:  Alex Laswell
// Created: 10-4-2017
// Purpose: reads five numbers from the user 
// 	    and produces a bar graph of the  
// 	    indicated values
// Input:   five (5) integer numbers where x >= 0
// Output:  A bar graph of the input

#include <stdio.h>

int main() {
	int beans, carrots, lettuce, peas, squash;
	// prompt the user for the amount of each 
	printf("Pounds of Beans: ");
	scanf("%d", &beans);
	printf("Pounds of Carrots: ");
	scanf("%d", &carrots);
	printf("Pounds of Lettuce: ");
	scanf("%d", &lettuce);
	printf("Pounds of Peas: ");
	scanf("%d", &peas);
	printf("Pounds of Squash: ");
	scanf("%d", &squash);

	// Beans using for loop
	printf("\nPounds of Beans:   ");
	for(int i = 0; i < beans; i++) {
		printf("B");
	}

	// Carrots using while loop 
	printf("\nPounds of Carrots: ");
	int j = 0;
	while(j < carrots) {
		printf("C");
		j++;
	}

	// Lettuce using do while
	printf("\nPounds of Lettuce: ");
	j = 0;
	do {
		// gotta check for 0
		if(lettuce != 0)
			printf("L");		
	} while(++j < lettuce);

	// Peas using while loop
	printf("\nPounds of Peas:    ");
	j = 0;
	while(j < peas) {
		printf("P");
		j++;
	}

	// squash using for loop
	printf("\nPounds of Squash:  ");
	for(int i = 0; i < squash; i++) {
		printf("S");
	}
	printf("\n");
}
