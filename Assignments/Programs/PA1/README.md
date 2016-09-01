# CS 200 Programming Assignment 1

Bank Program

## Setup

Download the "PA1_Shell" folder. This contains some starter code,
as well as Code::Blocks and Visual Studio projects already set up.

### Files Included

* **main.cpp** - Invokes BankProgram
* **BankProgram.hpp** - Includes the BankProgram class and its method and variable declarations.
* **BankProgram.cpp** - Includes the method definitions for BankProgram.

## Turn-In

Once finished with your project, you will need to turn in all
**.cpp** and **.hpp** files into the Dropbox.

## Groupwork

You are allowed to collaborate with classmates on this assignment,
but no programming teams allowed for this first assignment,
since it is an introduction.

---

## Specification

For this assignment, you will complete the program by
filling in the function bodies in **BankProgram.cpp**.

Even though a class declaration is included for this assignment,
it has already been written for you and you do not need to worry
about class specifics.

All of your work will be done in BankProgram.cpp.

Also note that the BankProgram has a private member variable
called **m_balance**. This variable will be used throughout the functions.

### void BankProgram::Start()

In this method you will need to:

1. Initialize **m_balance** to 0.
2. Call the MainMenu function like this:

	MainMenu();

### void BankProgram::MainMenu()

This is where the program will continue running until the user decides to quit. There is already some code included, which is a
while loop that will continue running the program until the
**done** boolean flag is set to **true**.

Within the while loop:

1. Display the text:

	BANK OF JCCC
	1. Deposit
	2. Withdraw
	3. View Balance
	4. Quit
	
	Choice: 

2. Create a variable called **choice**, whose type is an integer.
3. Use the **cin** command to get the user's input and store it in the **choice** variable.
4. The program will then run specific functions based on the user's choice:
	1. If choice 1 is selected, call Deposit:

	Deposit();

	2. If choice 2 is selected, call Withdraw:
	
	Withdraw();

	3. If choice 3 is selected, call ViewBalance:

	ViewBalance();

	4. If choice 4 is selected, set the **done** boolean to **true**.



### void BankProgram::Deposit()

### void BankProgram::Withdraw()

### void BankProgram::ViewBalance()