// CS156 HW1
// Author: Alex Laswell
// Purpose: reads two numbers from the user 
// 	    and produces a few arguably-interesting 
// 	    facts about the numbers
// Input: two (2) integer numbers where abs(x) < 1000000
// Output: prints "Two numbers, please:\nDividing num1/num2:\nPos diff: diff\nDivisibile: x\n"

int main() {
	long num1, num2;	// to store the user input
	
	// Prompt the user for the numbers
	// and read into the vars

	printf("Two numbers, please:\n");
	scanf("%f", num1); 
	scanf("%f", num2); 

	//Divide
	if(num2 == 0)
		printf("Dividing %f/%f: against the rules.", num1, num2);
	else
		printf("Dividing %f/%f: %f", num1, num2, num1/num2);
	return 0;
}
