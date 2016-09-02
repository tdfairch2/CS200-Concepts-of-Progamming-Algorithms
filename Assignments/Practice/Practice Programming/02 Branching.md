C++ Practice Programming

Variables, Data Types, Input/Output, and Arithmetic

# Programming Problems

## Program 1: Price and Tax, part 2

1. Declare a variable called **price**, whose type is a **float**.

2. Declare a variable called **tax**, whose type is a **float**.

3. Declare a variable called **pricePlusTax**, whose type is a **float**.

4. Declare a variable called **state**, whose type is a **string**.

4. Display the message to the user: "What is the price?"

5. Get the user's input and store it in **price**.

6. Display the message to the user: "What state are you in?"

7. Get the user's input and store it in **state**.

8. If **state** is "KS": set **tax** to 0.065.

9. If **state** is "MO": set **tax** to 0.04225.

8. Calculate the price plus tax as: **price + price * tax**.
    Store it in the **pricePlusTax** variable.

9. Display the message to the user: "Price plus tax: "

10. Display the value of **pricePlusTax** to the user.

---

# Solutions

## Program 1

    #include <iostream>
    #include <string>
    using namespace std;

    int main()
    {
        float price;
        float tax;
        float pricePlusTax;
        string state;
        
        cout << "What is the price? ";
        cin >> price;
        
        cout << "What is the state? ";
        cin >> state;
        
        if ( state == "KS" )
        {
            tax = 0.065;
        }
        else if ( state == "MO" )
        {
            tax = 0.04225;
        }
        
        pricePlusTax = price + price * tax;
        
        cout << "Price plus tax: " << pricePlusTax << endl;
        
        return 0;
    }

