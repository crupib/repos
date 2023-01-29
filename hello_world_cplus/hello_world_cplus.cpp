// hello_world_cplus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//int DemoConsoleOutput();
void MultiplyNumbers() {
    int FirstNumber = 0, SecondNumber = 0, MultiplacationResult = 0;
    cout << "This program will help you multiply two numbers " << endl;
    cout << "Enter the first number: ";
    // int FirstNumber = 0;
    cin >> FirstNumber;
    cout << "Enter the second number: ";
    //   int SecondNumber = 0;
    cin >> SecondNumber;

    MultiplacationResult = FirstNumber * SecondNumber;
    cout << FirstNumber << " x " << SecondNumber;
    cout << " = " << MultiplacationResult << endl;

}
int main()
{
 //   int InputNumber;
 //   int x = 8;
 //   int y = 6;
    //cout << "Enter an integer: ";
    //cin >> InputNumber;
    //cout << "Enter your name: ";
    //string InputName;
    //cin >> InputName;
    //cout << InputName << " entered : " << InputNumber << endl;
 //   DemoConsoleOutput();
    MultiplyNumbers();
   
    return 0; 
}
/*
int DemoConsoleOutput()
{
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Peformming division 10/5 = " << 10 / 5 << endl;
    cout << "PI when approximated is 22/7 = " << 22 / 7 << endl;
    cout << "PI more accurate 22.0/7 = " << 22.0 / 7 << endl;
    return 0;
}
*/