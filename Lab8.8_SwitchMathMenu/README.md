# C Programming Lab – Chapter 8, Question 8

## Description
This program implements a simple calculator that allows the user to perform addition, subtraction, multiplication, or division on two numbers.  

- The program displays a **menu** using `menuchoice()` and asks the user to select an operation.  
- It validates input to ensure only the offered menu choices (`a`, `b`, `c`, `d`, or `q`) are accepted.  
- For division, the program prevents division by zero and prompts the user to enter a new second number if necessary.  
- Users are repeatedly prompted for input until they choose to quit by selecting `q`.  

## Key Concepts Demonstrated
- **Switch/Case Statements** – handling the chosen operation cleanly and efficiently.  
- **Menu-driven Programs** – providing an interactive interface for the user.  
- **Functions (Methods)** – organizing code into reusable components:
  - `menuchoice()` – displays the menu and returns the user's choice.  
  - `getfirstchar()` – retrieves the first character of input while clearing the buffer.  
  - `dubchoice()` – validates and reads floating-point numbers safely.  
- **Loops** – `do-while` and `while` loops for input validation and repeated operation.  
- **Input Validation** – ensuring numbers are correctly entered and division by zero is prevented.  
- **Type Float / Double** – handling decimal values accurately for calculations.  

## How to Compile and Run
This program was tested in **Microsoft Visual Studio**.

### Using Visual Studio
1. Open Visual Studio and create a new C project.  
2. Add the lab `Ch8Ques8LAB.c` file to the project.  
3. Build and run (`Ctrl + F5`).  
