// CS156    HW4
// Author:  Alex Laswell
// Created: 10-18-2017
// Purpose: loop until user exits and
// 	    process the requested action 
// Input:   {'m', 'c', 'i', 'q'} followed by 
// 	    the specific action for each char
// Output:  The corresponding information for each opt

#include <stdio.h>
#include <string.h>


void show_menu() {
	// void function with no args
	// prints the help menu
	printf("m: print this menu\n");
	printf("c: cat a text file\n");
	printf("i: get information about a text file\n");
	printf("q - quit\n");
}


int isValid(char ext[]) {
	if(strcmp(ext, ".txt") != 0) return 0;
	else return 1;
}


void cat_a_file(char filename[51]) {
	int count, blank, lucs;
	char buf[81];
	
	// open the file
	FILE *infile = fopen(filename, "r");	// open for reading

	// loop and print while there are still lines in the file
	while(fgets(buf, sizeof(buf), infile) != NULL) {
		printf("%c\n", buf); 	
	}
	fclose(infile);	
}


void get_information() {
	
}


int main() {
	char opt;	// the option the user inputs
	char filename[51] = "";
	char ext[5];
	
	// print the menu once to begin
	show_menu();
	scanf("%c%*c", &opt);

	while(opt != 'q') {
		// switch on the option and preform the request
		switch(opt) {
			case 'm': 
				// help
				show_menu();
				scanf("%c%*c", &opt);
				break;
			case 'c': 
				// cat file
				printf("Filename: ");
				scanf("%c%*c", &filename);
				strcpy(ext, filename[strlen(filename) - 4]);
				if(isValid(ext) == 0) {
					printf("%c doesn't end with .txt", filename);
					break;
				}
				else { 
					cat_a_file(filename);
					break;
				}
			case 'i': 
				break;
			case 'q':
				// quit
				return 0;
				break;		
			default:
				// otherwise invalid
				printf("Invalid request '%c'; 'h' for help.", opt);
				break;
		}
	} 
}
