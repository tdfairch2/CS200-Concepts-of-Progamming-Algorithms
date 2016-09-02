C++ Practice Programming

Variables, Data Types, Input/Output, and Arithmetic

# Programming Problems

## Program 1: Division

1. Use the **cout** command to display the message to the user: "Please enter a numerator".

2. Create a variable named **numerator**, whose type is a **float**.

3. Use the **cin** command to get input from the user, and store it in the **numerator** variable.

4. Use the **cout** command to display the message to the user: "Please enter a denominator".

5. Create a variable named **denominator**, whose type is a **float**.

6. Use the **cin** command to get input from the user, and store it in the **denominator** variable.

7. Create a variable named **result**, whose data type is a **float**.

8. Calculate **result** by dividing the **numerator** by the **denominator**.

9. Use **cout** to display a message to the user: "Quotient is:"

10. Use **cout** to display the value of **result** to the user.

---

# Solutions

## Program 1

    #include <iostream>
    using namespace std;

    int main()
    {
        cout << "Please enter a numerator: ";
        float numerator;
        cin >> numerator;
        
        cout << "Please enter a denominator: ";
        float denominator;
        cin >> denominator;
        
        float result = numerator / denominator;
        
        cout << "Quotient: ";
        cout << result << endl;
        
        return 0;
    }
