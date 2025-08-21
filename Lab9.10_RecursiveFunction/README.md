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
## Example Run
```text
Enter number: 129
Enter base number between 2 to 10 (Ex. 8 for base-8): 8
129 in base-8 equivalent is: 201
Do you want to enter another number? (Press 'q' to quit or any other key to continue): y
Enter number: 45
Enter base number between 2 to 10 (Ex. 8 for base-8): 2
45 in base-2 equivalent is: 101101
Do you want to enter another number? (Press 'q' to quit or any other key to continue): y
Enter number: 100
Enter base number between 2 to 10 (Ex. 8 for base-8): 5
100 in base-5 equivalent is: 400
Do you want to enter another number? (Press 'q' to quit or any other key to continue): q
```

## How to Compile and Run
> This program was tested in **Microsoft Visual Studio**.

### Using Visual Studio
1. Open Visual Studio and create a new C project.  
2. Add `ch9ques10LAB.c` to the project.  
3. Build and run (`Ctrl + F5`).  
