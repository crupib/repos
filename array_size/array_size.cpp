// array_size.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*
    cout << "Use sizeof of determine memory occupied by arrays" << endl;
    int MyNumbers[100] = { 0 };
    cout << "Bytes occupied by an int: " << sizeof(int) << endl;
    cout << "Bytes occupied by array MyNumbers: " << sizeof(MyNumbers) << endl;
    cout << "Bytes occupied by each element: " << sizeof(MyNumbers[0]) << endl;
    cout << "Enter two integers : "<< endl;
    int Num1 = 0, Num2 = 0;
    cin >> Num1;
    cin >> Num2;
    cout << "Enter \'m' to multiply, anything else (except space) to add: ";
    char UserSelection = '\0';
    cin >> UserSelection;
    int Result = 0;
    if (UserSelection == 'm')
        Result = Num1 * Num2;
    else
        Result = Num1 + Num2;
    
    cout << "Result is : " << Result << endl;
    */
    char Buffer[20] = { '\0' };
    cout << "Enter a line of text: " << endl;
    string LineEntered;
    getline(cin, LineEntered);
    if (LineEntered.length() < 20)
        strcpy_s(Buffer, LineEntered.c_str());
    cout << "Buffer contains: " << Buffer << endl;

    return 0;
}
