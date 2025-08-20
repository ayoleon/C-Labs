/*
Chapter 11 Question 9 LAB
Write a function that replaces the contents of a string with the string reversed. Test the function in a complete
program that uses a loop to provide input values for feeding to the function
*/
#include <stdio.h>
#include <string.h>

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

char* reverse(char* str) //from ch9labquestion6
{
	//temp array
	char temp; 
	int start = 0;
	int end = strlen(str)-1;

	while (start < end) //swaps first and last, and then second and second to last, etc.. stop's when start and end are the same
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++; //first, then second, then third, etc.
		end--; // last, second to last, third to last, etc.
	}
	return str;
}

int main()
{
	char sentence[30];

	printf("Enter a sentence to process. No more than 29 chharacters.\n");
	while (s_gets(sentence, sizeof(sentence)) != 0 && sentence[0] != 0)
	{
		//reverse(sentence);
		printf("%s reversed is ", sentence);
		printf("% s\n", reverse(sentence));
		//puts(sentence); //shortcut printf for strings, authomatically prints new line after it......
		printf("Enter next string or press enter to quit.\n");
	}

}