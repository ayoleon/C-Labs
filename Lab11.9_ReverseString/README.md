# C Programming Lab – Chapter 11, Question 9

## Description
This lab implements a C program that reverses the contents of a string entered by the user.  

- A helper function `s_gets()` safely reads user input into a character array, trims the newline, and manages buffer overflow.  
- The core function `reverse()` takes a string, swaps characters from front to back using pointers and array indexing, and returns the reversed string.  
- The program repeatedly prompts the user for input, processes the string, and outputs the reversed version until the user presses **Enter** on an empty line.  

## Key Concepts Demonstrated
- **Loops** – `while` loops are used both to trim input, reverse the string, and repeatedly request input until termination.  
- **Pointers** – `char*` pointers are used for reading input (`s_gets`) and returning/manipulating strings.  
- **Arrays** – Strings are stored in fixed-size character arrays (`char sentence[30]`) and manipulated element by element.  
- **Methods (Functions)** – The program is organized into reusable functions:
  - `s_gets()` – safely gets input from the user.  
  - `reverse()` – reverses the string in place.  
  - `main()` – orchestrates input/output and calls helper functions.  

## Example Run
```text
Enter a sentence to process. No more than 29 chharacters.
Hello world
Hello world reversed is dlrow olleH
Enter next string or press enter to quit.
C programming
C programming reversed is gnimmargorp C
Enter next string or press enter to quit.
abcdefg
abcdefg reversed is gfedcba
Enter next string or press enter to quit.
```

## How to Compile and Run
> This program was tested in **Microsoft Visual Studio**

### Using Visual Studio
1. Open Visual Studio and create a new C project.  
2. Add the `Ch11Ques9LAB.c` file to the project.  
3. Build and run the program (`Ctrl + F5`).  
