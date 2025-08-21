# C Programming Lab – Chapter 11, Question 10

## Description
This program demonstrates string manipulation in C by removing all spaces from a user-input string.  

- The program defines a helper function `s_gets()` to safely read input strings using `fgets()` while trimming the newline character.  
- The function `removespace()` iterates over the string, removes all spaces, and shifts the characters over so the result is compacted.  
- In `main()`, the program repeatedly asks the user to enter a sentence (up to 29 characters). After processing, it displays the sentence without spaces. The loop continues until the user presses **Enter** on an empty line.
  
## Example Run
```text
Enter a sentence to process. No more than 29 chharacters.
Hello world
Processed sentence: Helloworld
Enter next string or press enter to quit.
I love C programming
Processed sentence: IloveCprogramming
Enter next string or press enter to quit.
This is a test
Processed sentence: Thisisatest
Enter next string or press enter to quit.
```
## How to Compile and Run
- This program was tested only in **Microsoft Visual Studio**. Behavior may vary slightly on other compilers.

### Using Visual Studio
1. Open Visual Studio and create a new C project.  
2. Add the `Ch11Ques10LAB.c` file to the project.  
3. Build and run the program (`Ctrl + F5`).  
