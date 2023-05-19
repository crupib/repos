// concat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Greetings("Hello std : string!");
    cout << Greetings << endl;
    string FirstLine;
    cout << "Enter a line of text" << endl;
    getline(cin, FirstLine);
    cout << "Enter another!" << endl;
    string SecLine;
    getline(cin, SecLine);
    cout << "Result of concatenation: " << endl;
    string Concat = FirstLine + " " + SecLine;
    cout << Concat << endl;
    cout << "Copy of concatenated string: " << endl;
    string Copy;
    Copy = Concat;
    cout << Copy << endl;
    cout << "Length of concat string: " << Concat.length() << endl;
    return 0;
}
