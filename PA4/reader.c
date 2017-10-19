// CS156    HW4
// Author:  Alex Laswell
// Created: 10-18-2017
// Purpose: loop until user exits and
// 	    process the requested action 
// Input:   {'m', 'c', 'i', 'q'} followed by 
// 	    the specific action for each char
// Output:  The corresponding information for each opt

#include <stdio.h>


void show_menu() {
	// void function with no args
	// prints the help menu
	printf("m: print this menu\n");
	printf("c: cat a text file\n");
	printf("i: get information about a text file\n");
	printf("q - quit\n");
}


void cat_a_file() {
	int count, blank, lucs;
	char buf[81];
	char ext[5];
	char filename[51];
	
	// prompt the user for a file
	printf("Filename: ");
	scanf("%c%*c", &filename);

	// verify this is a text file
	ext = &filename[strlen(filename) - 4];
	if(strcmp(ext, ".txt") != 0) {
		printf("%c doesn't end with .txt"
		return;
	}
	// otherwise open the file
	FILE *infile = fopen(filename, "r");	// open for reading

	// loop and print while there are still lines in the file
	while(fgets(buf, size(buf), infile) != NULL) {
		printf("%c\n", buf); 	
	}
	fclose(infile);	
}


void show_title_given_year(int year) {
	// void function with an int arg
	// prints the title of the Oz book 
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
			printf("Sorry, no such book.");
			break;
	}
}


void show_age_given_index(int index) {
	// void function with and int arg
	// prints the difference of the cur year (2017) and 
	// the year of the book that was published;
	// at the user provided input
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
				// otherwise invalid
				printf("Invalid request '%c'; 'h' for help.", opt);
				break;
		}
	} 
}
