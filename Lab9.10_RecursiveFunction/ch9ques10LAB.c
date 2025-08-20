/*
Chapter 9 Question 10
Generalize the to_binary90 function of Listing 9.8 to a to_base_n() function that takes a second argument
in the range of 2-10. It then should print the number that is its first argument to the number base given by a second
argument. For example, to_base_n(129, 8) would display 201, the base 8 equivalent of 129. Test the function in a complete 
program. USE RECURSION
*/

#include <stdio.h>

void to_base_n(int n, int b)
{
	 
	int r = n % b; //remainder variable or successive division algorithm
	if (n >= b) // 
		to_base_n(n / b, b); //recursive function call, integer division by 2. EACH FUNCTION RUN IN QUEUE/MEMORY. STORES ITS OWN r VALUE
	printf("%d", r); // prints remainders in reverse order (BINARY)
}

int main()
{
	int num1, basenum;
	char choice;
	do
	{
		printf("Enter number: ");
		scanf_s("%d", &num1);
		printf("Enter base number between 2 to 10 (Ex. 8 for base-8): ");
		scanf_s("%d", &basenum);
		
		/*
		if (("%d", &basenum) != 1 || basenum < 2 || basenum > 10) // MAKES SURE BASE NUMBER IS BETWEEN 2-10
		{
			printf("Invalid base number. Please enter a base between 2 and 10.\n");
			scanf_s("%d", &basenum);
			continue; // Skip to the next iteration if invalid base
		}
		 */    //"CHOICE NOT INITIALIZED" IF THIS CODE IS USED
		printf("%d in base-%d equivalent is: ", num1, basenum);
		to_base_n(num1, basenum);
		while (getchar() != '\n'); //clear buffer of newline character
		printf("\nDo you want to enter another number? (Press 'q' to quit or any other key to continue): ");
		choice = getchar();
		while (getchar() != '\n'); //clear buffer of newline character
	} while (choice != 'q' && choice != 'Q');
	return 0;
}