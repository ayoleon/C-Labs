# C Programming Lab – Chapter 9, Question 10

## Description
This program demonstrates the use of **recursion** to convert an integer into any base between 2 and 10.  

- The core function `to_base_n(int n, int b)` recursively divides the number `n` by the base `b` and prints the remainders in reverse order.  
- The recursion ensures that the most significant digits are printed first, following the standard method for base conversion.  
- In `main()`, the program prompts the user to enter a number and a base, then prints the equivalent value in the specified base.  
- Users can repeat the process multiple times until they choose to quit.

## Key Concepts Demonstrated
- **Recursion / Recursive Functions** – `to_base_n()` calls itself to handle the division of numbers by the base, illustrating how recursion can replace iterative loops for certain algorithms.  
- **Loops** – The `do-while` loop in `main()` allows repeated input until the user decides to quit.  
- **Input/Output** – Using `scanf_s` and `getchar()` for safe input and buffer management.  
- **Mathematical Operations** – Integer division and modulus operations are used to calculate digits in the new base.

## How to Compile and Run
> This program was tested in **Microsoft Visual Studio**.

### Using Visual Studio
1. Open Visual Studio and create a new C project.  
2. Add `ch9ques10LAB.c` to the project.  
3. Build and run (`Ctrl + F5`).  
