// bool_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter true(1) of false(0) for two operands:" << endl;
    bool Op1 = false, Op2 = false;
    cin >> Op1;
    cin >> Op2;  
    cout << Op1 << " AND " << Op2 << " = " << (Op1 && Op2) << endl;
    cout << Op1 << " OR " << Op2 << " = " << (Op1 || Op2) << endl;
    cout << "Hello World!\n";
    cout << "Use boolean values (0/1) to answer questions" << endl;
    cout << "is it raining? ";
    bool Raining = false;
    cin >> Raining;
    cout << "Do you have buses on the streets? ";
    bool Buses = false;
    cin >> Buses;
    if (Raining && !Buses)
        cout << "You cannot go to work" << endl;
    else
        cout << "You can go to work" << endl;
    if (Raining && Buses)
        cout << "Take an umbrella" << endl;
    if ((!Raining) && Buses)
        cout << "Enjoy the sun and have a nice day" << endl;
    cout << "Answer questions with 0 or 1" << endl;
    cout << "Is there a deep discount on your favorite car? ";
    bool Discount = false;
    cin >> Discount;
    cout << "Did you get a fantastic bonus? ";
    bool FantasticBonus = false;
    cin >> FantasticBonus;
    if (Discount || FantasticBonus)
        cout << "Congratulations, you can buy that car!" << endl;
    else
        cout << "Sorry, waiting a while is a good idea" << endl;

    return 0;
}
