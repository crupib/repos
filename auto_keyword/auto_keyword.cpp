// auto_keyword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
constexpr double GetPi() { return 22.0 / 7; }
constexpr double TwicePi() { return 2 * GetPi(); }

int main()
{
    const double Pi = 22.0 / 7;
    
    auto Flag = true;
    auto Number = 2500000000000;
    cout << "The value of constant Pi is: " << Pi << endl;
    cout << "Flag = " << Flag;
    cout << " , sizeof(Flag) = " << sizeof(Flag) << endl;
    cout << "Number = " << Number;
    cout << " , sizeof(Number) = " << sizeof(Number) << endl;
    auto mypi = GetPi();
    cout << "my pi = " << mypi << endl;
    auto twicepi = TwicePi();
    cout << "my 2 * pi = " << twicepi << endl;
    return 0;
}