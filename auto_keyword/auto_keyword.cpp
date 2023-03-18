// auto_keyword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
constexpr double GetPi() { return 22.0 / 7; }
constexpr double TwicePi() { return 2 * GetPi(); }
int main()
{
   
    enum RainbowColors
    {
        Violet = 0,
        Indigo,
        Blue,
        Green,
        Yellow,
        Orange,
        Red
    };
    enum CardinalDirections
    {
        North = 25,
        South,
        East,
        West
    };

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
    RainbowColors MyWorlds = Blue;
    cout << "Displaying directions and their symbolic values" << endl;
    cout << "North: " << North << endl;
    cout << "South: " << South << endl;
    cout << "East: " << East << endl;
    cout << "West: " << West << endl;
    CardinalDirections WindDirection = South;
    cout << "Variable Windirection = " << WindDirection << endl;
    unsigned short MyShortInt = 0;
    MyShortInt = MyShortInt - 1;
    cout << MyShortInt << endl;
    return 0;
}