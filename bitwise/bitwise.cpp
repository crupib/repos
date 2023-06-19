// bitwise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	cout << "Enter a number(0 - 255) : ";
	unsigned short InputNum = 0;
	cin >> InputNum;

	bitset<8> InputBits(InputNum);
	cout << InputNum << " in binary is " << InputBits << endl;

	bitset<8> BitwiseNOT = (~InputNum);
	cout << "Logical NOT |" << endl;
	cout << "~" << InputBits << " = " << BitwiseNOT << endl;

	
	bitset<8> BitwiseAND = (0x0F & InputNum);
	cout << "Logical AND, & with 00001111" << endl;
	cout << "00001111 & " << InputBits << " = " << BitwiseAND << endl;

	
	bitset<8> BitwiseOR = (0x0F | InputNum);
	cout << "Logical Or, | with 00001111" << endl;
	cout << "00001111 | " << InputBits << " = " << BitwiseOR << endl;

	
	bitset<8> BitwiseXOR = (0x0F ^ InputNum);
	cout << "Logical XOR, ^ with 00001111" << endl;
	cout << "00001111 ^ " << InputBits << " = " << BitwiseXOR << endl;

	return 0;
}