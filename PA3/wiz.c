// CS156    HW3
// Author:  Alex Laswell
// Created: 10-11-2017
// Purpose: loop until the user says not to 
// Input:   five (5) integer numbers where x >= 0
// Output:  A bar graph of the input

#include <stdio.h>


void show_menu() {
	// prints the help menu
	printf("h - help\n");
	printf("i - show age of the Oz book for that index\n");
	printf("q - quit\n");
	printf("y - show the Oz book for that year");
}


void show_title_given_year(int year) {
	// prints the Oz title of the book 
	// that was published in that year
	switch(year) {
		case 1900: 
			printf("In %d: The Wonderful Wizard of Oz", year);
			break;
		case 1904: 
			printf("In %d: The Marvelous Land of Oz", year);
			break;
		case 1907: 
			printf("In %d: Ozma of Oz", year);
			break;
		case 1908: 
			printf("In %d: Dorothy and the Wizard in Oz", year);
			break;
		case 1909: 
			printf("In %d: The Road to Oz", year);
			break;
		case 1910: 
			printf("In %d: The Emerald City of Oz", year);
			break;
		case 1913: 
			printf("In %d: The Patchwork Girl of Oz", year);
			break;
		case 1914: 
			printf("In %d: Tik-Tok of Oz", year);
			break;
		case 1915: 
			printf("In %d: The Scarecrow of Oz", year);
			break;
		case 1916: 
			printf("In %d: Rinkitink of Oz", year);
			break;
		case 1917: 
			printf("In %d: The Lost Princess of Oz", year);
			break;
		case 1918: 
			printf("In %d: The Tin Woodman of Oz", year);
			break;
		case 1919: 
			printf("In %d: The Magic of Oz", year);
			break;
		case 1920: 
			printf("In %d: Glinda of Oz", year);
			break;
		default:
			printf("Sorry, no such book");
			break;
	}
}


void show_age_given_index(int index) {
	int years[] = {1900, 1904, 1907, 1908, 1909, 1910, 1913, 1914, 1915, 1916, 1917, 1918, 1919, 1920};
	if(index > 0 && index < 14) 
		printf("Published %d years ago.", 2017 - years[index-1]);
	else
		printf("Sorry, no such book.");
}


int main() {
	char opt;	// the option the user inputs
	int value = 0;	// the year/index the user inputs

	// print the initial line
	printf("Ignore the man behind that curtain!");
	
	while(opt != 'q') {
		// Ask for a request
		printf("\nRequest: ");
		scanf("%c%*c", &opt);
		
		// switch on the option and preform the request
		switch(opt) {
			case 'h': 
				// help
				show_menu();
				break;
			case 'i': 
				// index lookup
				printf("What index? ");
				scanf("%d%*c", &value);
				show_age_given_index(value);
				break;
			case 'q': 
				// quit
				return 0;
				break;
			case 'y':
				// year lookup
				printf("What year? ");
				scanf("%d%*c", &value);
				show_title_given_year(value);
				break;		
			default:
				printf("Invalid request '%c'; 'h' for help.", opt);
				break;
		}
	} 
}
