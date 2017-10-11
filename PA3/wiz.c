// CS156    HW3
// Author:  Alex Laswell
// Created: 10-11-2017
// Purpose: loop until the user says not to 
// Input:   five (5) integer numbers where x >= 0
// Output:  A bar graph of the input

#include <stdio.h>


void show_menu() {
	printf("h - help\n
		i - show age of the Oz book for that index\n
		q - quit\n 
		y - show the Oz book for that year\n");
}


void show_title_given_year(int year) {
	// prints the Oz title of the book 
	// that was published in that year
	switch(year) {
		case 1900: 
			printf("In %d: The Wonderful Wizard of Oz\n", year);
			break;
		case 1904: 
			printf("In %d: The Marvelous Land of Oz\n", year);
			break;
		case 1907: 
			printf("In %d: Ozma of Oz\n", year);
			break;
		case 1908: 
			printf("In %d: Dorothy and the Wizard in Oz\n", year);
			break;
		case 1909: 
			printf("In %d: The Road to Oz\n", year);
			break;
		case 1910: 
			printf("In %d: The Emerald City of Oz\n", year);
			break;
		case 1913: 
			printf("In %d: The Patchwork Girl of Oz\n", year);
			break;
		case 1914: 
			printf("In %d: Tik-Tok of Oz\n", year);
			break;
		case 1915: 
			printf("In %d: The Scarecrow of Oz\n", year);
			break;
		case 1916: 
			printf("In %d: Rinkitink of Oz\n", year);
			break;
		case 1917: 
			printf("In %d: The Lost Princess of Oz\n", year);
			break;
		case 1918: 
			printf("In %d: The Tin Woodman of Oz\n", year);
			break;
		case 1919: 
			printf("In %d: The Magic of Oz\n", year);
			break;
		case 1920: 
			printf("In %d: Glinda of Oz\n", year);
			break;
		case default:
			printf("Sorry, no such book\n");
			break;
	}

}


int main() {
	char opt = "";	// the option the user inputs
	int year = 0;	// the year the user inputs
	int index = 0;	// the index the user inputs

	printf("Ignore the man behind that curtain!");
	
	do {
		printf("Request: ");
		scanf("%c", &opt);
		
		// switch on the option and preform the request
		switch(opt) {
			case h: 
				show_menu();
				break;
			case i: 
				printf("What index? ");
				scanf("%d", &index);
				break;
			case q: 
				break;
			case y:
				printf("What year? ");
				scanf("%d", &year);
				show_title_given_year(year);
				break;
			
		}
	}

}
