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
#include <ctype.h>


void show_menu() {
	// void function with no args
	// prints the help menu
	printf("m: print this menu\n");
	printf("c: cat a text file\n");
	printf("i: get information about a text file\n");
	printf("q - quit\n");
	return;
}




int cat_a_file(char filename[51]) {
	char line[81];
	
	// open the file
	FILE *infile = fopen(filename, "r");	// open for reading
	if (infile == NULL) {
		printf("Can't open the file \"%s\"\n", filename);
		return -1;
	}
	// loop and print while there are still lines in the file
	while(fgets(line, sizeof(line), infile) != NULL)
		fputs(line, stdout);	// write to stdout	
	fclose(infile);	
	return 0;
}


int fgetline(FILE *fp, char line[], int max)
{
int nch = 0;
int c;
max = max - 1;			/* leave room for '\0' */

while((c = getc(fp)) != EOF)
	{
	if(c == '\n')
		break;

	if(nch < max) {
		line[nch] = c;
		nch = nch + 1;
	}
}

if(c == EOF && nch == 0)
	return EOF;

line[nch] = '\0';
return nch;
}


int info_a_file(char filename[51]) {
	int c, lucs = 0;
	int count = 0;
	int emptyline = 0;
	char line[81];

	// open the file
	FILE *infile = fopen(filename, "r");	// open for reading
	if (infile == NULL) {
		printf("Can't open the file \"%s\"\n", filename);
		return -1;
	}
	// loop and count things
	while((c = fgetline(infile, line, 81)) != EOF) {
		count++;
		if(c == 0) emptyline++;
		// check for 'luc'
		// need to convert the line to lowercase first
		for(int i = 0; line[i]; i++) {
			line[i] = tolower(line[i]);
		}
		// now use strstr to find any instancs of 'luc'
		if(strstr(line, "luc")) lucs++;
	}
	if(count > 0) {
		printf("Lines: %d\nNon-empty: %d\nLucs: %d\n", count, count-emptyline, lucs);
	}
	else printf("That file is empty.\n");
	fclose(infile);
	return 0;
}


int main() {
	char opt[1024];	// the option the user inputs
	char filename[51];
	char ext[5];
	
	// print the menu once to begin
	show_menu();
	printf("Action: ");
	
	fgets(opt, sizeof(opt), stdin);
	while(opt[0] != 'q') {
		// switch on the option and preform the request
		switch(opt[0]) {
			case 'm': 
				// help
				show_menu();
				break;
			case 'c': 
				// cat a file
				printf("Filename: ");
				fgets(filename, sizeof(filename), stdin);
				filename[strlen(filename)-1] = '\0';		// remove new line char
				strcpy(ext, &filename[strlen(filename) - 4]);
				if(strcmp(ext, ".txt") != 0) {
					printf("%s doesn't end with .txt\n", filename);
					break;
				}
				else { 
					cat_a_file(filename);
					break;
				}
			case 'i': 
				// info a file
				printf("Filename: ");
				fgets(filename, sizeof(filename), stdin);
				filename[strlen(filename)-1] = '\0';		// remove new line char
				strcpy(ext, &filename[strlen(filename) - 4]);
				if(strcmp(ext, ".txt") != 0) {
					printf("%s doesn't end with .txt\n", filename);
					break;
				}
				else { 
					info_a_file(filename);
					break;
				}
				break;
		}
	printf("Action: ");
	fgets(opt, sizeof(opt), stdin);
	} 
	// quit
	printf("That is all.\n");	
	fflush(stdout);
	return 0;
}
