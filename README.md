# C Programming Labs
This repository contains my C programming lab assignments for **[CS222 - Programming in C/C++, Cayuga Community College]**.  
Labs demonstrate fundamental concepts of the C language, such as functions, loops, arrays, pointers, string manipulation, and recursion.  

All programs in this repository were written and tested in **Microsoft Visual Studio**.  
They may also compile and run in other environments (such as GCC or Clang).

## Contents
> Each lab folder (or `.c` file) contains source code and may include a README explaining the specific problem and solution.

## Key Concepts Practiced
- **Loops** – `for`, `while`, and `do-while` structures for repetition  
- **Arrays** – storing and manipulating collections of characters and numbers  
- **Pointers** – working with memory addresses and dynamic behavior
- **Functions (Methods)** – modularizing code into reusable components  
- **Recursion / Recursive Functions** – solving problems by having functions call themselves, e.g., converting numbers to different bases  
- **String Manipulation** – custom functions for reading, reversing, and modifying text  
- **Input/Output** – safe user input handling with `fgets()` and formatted output

## Labs Inlcuded
### 11.10_RemoveSpaces - Remove Spaces from a String (Chapter 11, Question 10)
**Description:**  
This program defines a function `removespace()` that removes all spaces from a given string. The program repeatedly reads input strings from the user until an empty line is entered, applies the function, and displays the processed string.  

**Key Concepts:**  
- String manipulation  
- Character arrays  
- Loops and conditional logic  

### 11.9_ReverseString - Reverse a String (Chapter 9, Question 9)
**Description:**  
This program defines a function `reverse()` that reverses a string in place. It uses a loop in `main()` to read multiple strings from the user and applies the function to display the reversed strings.  

**Key Concepts:**  
- String reversal  
- Arrays and pointers  
- Loops and user input
-   
### 8.8_SwitchMathMenu - Simple Calculator with Input Validation (Chapter 8, Question 8)
**Description:**  
This program presents a menu-driven calculator that performs addition, subtraction, multiplication, and division. It validates user input for both menu choices and numeric values. Division by zero is explicitly handled.  

**Key Concepts:**  
- Menu-driven programs  
- Input validation  
- Conditional statements and loops  
- Floating-point arithmetic  

### 9.10_RecursiveFunction - Convert Number to Base-n Using Recursion (Chapter 9, Question 10)
**Description:**  
This program defines a recursive function `to_base_n()` that converts a given decimal number to any base between 2 and 10. The program repeatedly asks the user for a number and a base, then prints the number in the specified base.  

**Key Concepts:**  
- Recursion  
- Base conversion  
- Input loops and validation  


## How to Compile and Run
### Using Visual Studio
1. Open Visual Studio.  
2. Create a new C project (Console Application).  
3. Add the `.c` file from the desired lab.  
4. Build and run (`Ctrl + F5`).  
