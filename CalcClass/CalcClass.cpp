//Calculator program
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int menu; //Variable for the number the user inputs
	
	printf("Enter a number from the list below\n\n");

	printf("1. Addition\n"); //User Must Select an Option for the function to be performed in the Menu 
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n\n");

	printf("Enter number: "); //User input for the calculator menu
	scanf("%d", &menu);

	printf("\n");
    return 0;
}

