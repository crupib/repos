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
    
    char Buffer[20] = { '\0' };
    cout << "Enter a line of text: " << endl;
    string LineEntered;
    getline(cin, LineEntered);
    if (LineEntered.length() < 20)
        strcpy_s(Buffer, LineEntered.c_str());
    cout << "Buffer contains: " << Buffer << endl;
    cout << "Enter  two numbers: " << endl;
    float Num1 = 0, Num2 = 0;
    cin >> Num1;
    cin >> Num2;
    cout << "Enter 'd' to divide, anything else to multiply: " << endl;
    char UserSelection = '\0';
    cin >> UserSelection;
    if (UserSelection == 'd')
    {
        cout << "You want division!" << endl;
        if (Num2 != 0)
        {
            cout << "No div-by-zero, proceeding to calculate" << endl;
            cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
        }
        else
            cout << "Division by zero is not allowed" << endl;
    }
    else
    {
        cout << "You want multiplication!" << endl;
        cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
    }
    enum DaysOfWeek
    {
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    cout << "Find what days of the week are named after! " << endl;
    cout << "Enter a number for a day (Sunday = 0): ";
    int Day = Sunday;
    cin >> Day;
    if (Day == Sunday)
        cout << "Sunday was named after the Sun" << endl;
    else if (Day == Monday)
        cout << "Monday was named after the Moon" << endl;
    else if (Day == Tuesday)
        cout << "Tuesday was named after the Mars" << endl;
    else if (Day == Wednesday)
        cout << "Wednesday was named after the Mercury" << endl;
    else if (Day == Thursday)
        cout << "Thursday was named after the Jupiter" << endl;
    else if (Day == Friday)
        cout << "Friday was named after the Venus" << endl;
    else if (Day == Saturday)
        cout << "Saturday was named after the Saturn" << endl;
    else
        cout << "Wrong input, execute again!" << endl;
    
    switch (Day)
    {

    case Sunday:
        cout << "Sunday was named after the Sun" << endl;
        break;
    case Monday:
        cout << "Monday was named after the Moon" << endl;
        break;
    case Tuesday:
        cout << "Tuesday was named after the Mars" << endl;
        break;
    case Wednesday:
        cout << "Wednesday was named after the Mercury" << endl;
        break;
    case Thursday:
        cout << "Thursday was named after the Jupiter" << endl;
        break;
    case Friday:
        cout << "Friday was named after the Venus" << endl;
        break;
    case Saturday:
        cout << "Saturday was named after the Saturn" << endl;
        break;
    default:
        cout << "Wrong input, execute again!" << endl;
        break;
    }
    */
int Num1 = 0, Num2 = 0;
cout << "Enter two numbers : " << endl;

cin >> Num1;
cin >> Num2;
int Max = (Num1 > Num2) ? Num1 : Num2;
cout << "THe greater of " << Num1 << " and " << Num2 << " Is: " << Max<< endl;
return 0;
}
