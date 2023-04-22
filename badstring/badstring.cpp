#include <iostream>
#include <string>
using namespace std;
int main()
{
/*  cout << "Enter a word NOT longer than 20 characters:" << endl;
	
	 char UserInput[21] = { '\0' };
     cin >> UserInput;
	
     cout << "Length of your input was: " << strlen(UserInput) << endl;
*/
	string Greetings("Hello std::string!");
	cout << Greetings << endl;

    cout << "Enter a line of text: " << endl;
	string FirstLine;
    getline(cin, FirstLine);
	
	cout << "Enter another: " << endl;
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
