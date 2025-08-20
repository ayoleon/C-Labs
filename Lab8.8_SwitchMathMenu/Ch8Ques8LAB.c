/*
Chap8 Question 8
Write a program that shows you a menu offering you the choice of addition, subtraction, multiplication, or division. 
After getting your choice, the program asks for two numbers, then performs the requested operation. The
program should accept only the offered menu choices. It should use type float for the numbers and
allow the user to try again if he or she fails to enter a number. In the case of division, the program
should prompt the user to enter a new value if 0 is entered as the value of the second number. */

#include <stdio.h>
char menuchoice();
char getfirstchar();
double dubchoice();
int main()
{
	char choice = menuchoice();
	double first, second, result;

	if (choice != 'q')
	{
		// pre-loop prompt
		printf("Enter the first number:\n");
		first = dubchoice(); //USING NUMCHOICE FUNCTION IN TWO SPOTS
		while (getchar() != '\n'); //CLEAN THE BUFFER BECAUSE NEWLINE IS STILL IN THERE
		printf("Enter the second number:\n");
		second = dubchoice();
		while (getchar() != '\n'); //CLEAN THE BUFFER BECAUSE NEWLINE IS STILL IN THERE
	}
	while (choice != 'q')
	{
		//determine payrate from the choice returned from menu
		switch (choice)
		{
		case 'a':
			result = first + second;
			printf("%.2lf + %.2lf = %.2lf\n", first, second, result);
			break;
		case 'b':
			result = first - second;
			printf("%.2lf - %.2lf = %.2lf\n", first, second, result);
			break;
		case 'c':
			result = first * second;
			printf("%.2lf * %.2lf = %.2lf\n", first, second, result);
			break;
		case 'd':
			if (second == 0) //can use if or while loop
			{
				printf("Cannot divide by zero. Please enter a new second number:\n");
				second = dubchoice(); // Ask for input again if it's zero
				while (getchar() != '\n'); // Clean buffer
			}
			result = first / second;
			printf("%.2lf / %.2lf = %.2lf\n", first, second, result);
			break;
		default:
			printf("program error in choice switch in main. \n");
			result = 0;
			// no break needed
		}
		choice = menuchoice();
		if (choice == 'q')
			continue;
		printf("Enter the first number:\n");
		first = dubchoice(); //USING NUMCHOICE FUNCTION IN TWO SPOTS
		while (getchar() != '\n'); //CLEAN THE BUFFER BECAUSE NEWLINE IS STILL IN THERE
		printf("Enter the second number:\n");
		second = dubchoice();
		while (getchar() != '\n');
	}
	

}

char menuchoice() //provide menu and return the users choice
{
	char choice;
	do
	{
		printf("\n*****************************************************************\n");
		printf("Enter the letter corresponding to the operation.\n");
		printf("a.) add\nb.) subtract\nc.) multiply\nd.) divide\nq.) quit\n");
		printf("*****************************************************************\n\n");
		choice = getfirstchar();
		if (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd' && choice != 'q')
			printf("Please enter only a, b, c, d, or q to quit.\n");
	} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd' && choice != 'q'); //number entered is not good menu choice
	//while( (choice < 'a' || choice > 'd') && choice != 'q')
	return choice;

}

char getfirstchar()// get first character from unput and flush the rest
{
	char ch;
	ch = getchar();
	//clean the buffer
	while (getchar() != '\n'); //empties the buffer by grabbing all the characters from it until the newline
	return ch;

}

double dubchoice()
{
	double choice;
	char ch; //HOLD THE BAD INPUT CHARACTERS AS WE FLUSH THEM
	while (scanf_s("%lf", &choice) == 0) //Scanf was unable to read a DOUBLE NUMBER from the buffer
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
			//continue; //track through the buffer grabbing all the characters.
		}
		printf(" is bad input. Please enter a number.\n");
	}
	return choice;
}