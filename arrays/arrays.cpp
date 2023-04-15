// auto_keyword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int ARRAY_LENGTH = 5;
    int MyNumbers[ARRAY_LENGTH] = {0};
  /* cout << "Enter index of the element to be changed: ";
    int nElementIndex = 0;
    cin >> nElementIndex;
    cout << "Enter new value: ";
    cin >> MyNumbers[nElementIndex];
    cout << "First element at index 0: " << MyNumbers[0] << endl;
    cout << "Second element at index 1: " << MyNumbers[1] << endl;
    cout << "Third element at index 2: " << MyNumbers[2] << endl;
    cout << "Fourth element at index 3: " << MyNumbers[3] << endl;
    cout << "Fifth element at index 4: " << MyNumbers[4] << endl;
    cout << "Hello World!" << endl;
*/
    vector <int> DynArrNum(3);
    DynArrNum[0] = 365;
    DynArrNum[1] = -421;
    DynArrNum[2] = 789;
    cout << "Number of integers in array " << DynArrNum.size() << endl;
    cout << "Enter another number for the array" << endl;
    int AnotherNum = 0;
    cin >> AnotherNum;
    DynArrNum.push_back(AnotherNum);
    cout << "Number of integers in array: " << DynArrNum.size() << endl;
    cout << "Last element in array" << endl;
    cout << DynArrNum[DynArrNum.size() - 1] << endl;
    int ThreeRowsThreeColumns[3][3] = \
         {{-501, 206, 2011}, { 989, 101, 206 }, { 303, 456, 596 }};
    cout << "Row 0: " << ThreeRowsThreeColumns[0][0] << " " \
         << ThreeRowsThreeColumns[0][1] << " " \
         << ThreeRowsThreeColumns[0][2] << endl;
    cout << "Row 1: " << ThreeRowsThreeColumns[1][0] << " " \
         << ThreeRowsThreeColumns[1][1] << " " \
         << ThreeRowsThreeColumns[1][2] << endl;
    cout << "Row 2: " << ThreeRowsThreeColumns[2][0] << " "\
         << ThreeRowsThreeColumns[2][1] << " " \
         << ThreeRowsThreeColumns[2][2] << endl;
     return 0;
}