#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	while (!cin.eof())
	{		
		cout << num1 + num2 << endl;
		cin >> num1 >> num2;
	} 
}