/*
Chapter 11 Question 10
Write a function that takes a STRING as an argument and removed the spaces from the string. Test it in a program that uses a loop
to read lines until you enter an empty line. The program should apply the function to each input string and display the result..
--DELETE SPACE AND MOVE CHARACTERS OVER--
*/


#include <stdio.h>


char* s_gets(char* str, int max)
{
	char* inputstream;
	int index = 0;

	inputstream = fgets(str, max, stdin);  //returns pointer, returns NULL(0) if unable to get something
	if (inputstream != 0) //SOMETHIS WAS READ, INPUTSTREAM IS NOT NULL
	{
		/* sequentially move character by character looking for the first occurence of a \n or a \0*/
		while (str[index] != '\n' && str[index] != '\0') //the index position is a character that's not the end
			index++;								//at the end of this loop, index is the position of the first newline or null char.

		if (str[index] == '\n') //F_GETS GRABS NEWLINE CHARACTER. REPLACE IT WITH END/NULL CHAR
			str[index] = '\0';
		else
			while (getchar() != '\n');  //BUFFER FLUSH IF NEWLINE CHARACTER OR NULL CHARACTER NEVER REACHED (input too long)
	}

	//return the pointer

	return inputstream;
}

void removespace(char* teststring)
{
	int read = 0, write = 0; // ************ 

	while (teststring[read] != '\0') 
	{
		if (teststring[read] != ' ') 
		{
			teststring[write] = teststring[read];
			write++; //CHAR TO MODIFY ONLY MOVED FORWARD IF NOT SPACE. IF IT IS SPACE, CHAR-TO-MOD REMAINS AND IS COMPAIRED TO NEXT(READ)
		}
		read++;
	}

	// Terminate the new string
	teststring[write] = '\0';
}

int main()
{
	char sentence[30];

	printf("Enter a sentence to process. No more than 29 chharacters.\n");
	while (s_gets(sentence, sizeof(sentence)) != 0 && sentence[0] != 0)
	{
		removespace(sentence);
		printf("Processed sentence: %s\n", sentence);

		printf("Enter next string or press enter to quit.\n");
	}

}