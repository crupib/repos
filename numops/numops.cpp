// numops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter two integers:" << endl;
    int Num1 = 0, Num2 = 0;
    /*
    cin >> Num1;
    cin >> Num2;
    cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
    cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
    cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
    cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
    cout << Num1 << " % " << Num2 << " = " << Num1 % Num2 << endl;
    Num1 = Num1++;
    Num2 = Num2--;
    cout << "Num1++ " << Num1 << endl;
    cout << "Num2-- " << Num2 << endl;
    */
    int MyInt = 101;
    cout << "Start value of integer being operated: " << MyInt << endl;
    int PostFixInc = MyInt++;
    cout << "Result of Postfix Increment = " << PostFixInc << endl;
    cout << "After Postfix Increment, MyInt = " << MyInt  << endl;

    MyInt = 101;
    int PreFixInc = ++MyInt;
    cout << "Result of Prefix Increment = " << PreFixInc << endl;
    cout << "After Prefix Increment, MyInt = " << MyInt << endl;

    MyInt = 101;
    int PostFixDec = MyInt--;
    cout << "Result of PostFix Decrement = " << PostFixDec << endl;
    cout << "After PostFix Decrement, MyInt = " << MyInt << endl;

    MyInt = 101;
    int PreFixDec = --MyInt;
    cout << "Result of PreFix Decrement = " << PreFixDec << endl;
    cout << "After PreFix Decrement, MyInt = " << MyInt << endl;
}
