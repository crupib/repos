// bitshift.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int Input = 0;
    cin >> Input;
    int Half = Input >> 1;
    int Quarter = Input >> 2;
    int Double = Input << 1;
    int Quadruple = Input << 2;
    cout << "Quarter: " << Quarter << endl;
    cout << "Half: "<<  Half << endl;
    cout << "Double: " << Double << endl;
    cout << "Quadruple: " << Quadruple << endl;
    int Value = 0;
    cout << "Enter a number: ";
    cin >> Value;
    Value += 8;
    cout << " After +=8, value= " << Value << endl;
    Value -= 2;
    cout << " After -=2, value= " << Value << endl;
    Value /= 4;
    cout << " After /=4, value= " << Value << endl;
    Value *= 4;
    cout << " After *=4, value= " << Value << endl;
    Value %= 1000;
    cout << "After *=1000, value= " << Value << endl;
    
    cout << "After <<= 2, value = " << (Value <<= 1) << endl;
    cout << "After >>= 2, value = " << (Value >>=2) << endl;
    cout << "After |= 0x55,, value = " << (Value |= 0x55) << endl;
    cout << "After ^= 0x55, value = " << (Value ^= 0x55) << endl;
    cout << "After &= 0x0F, value = " << (Value &= 0x0F) << endl;
}