#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	int temp;
	
	cin >> num1 >> num2;
	temp = num2;

	cout << num1 * (temp % 10) << endl;
	temp /= 10;
	cout << num1 * (temp % 10) << endl;
	temp /= 10;
	cout << num1 * (temp % 10) << endl;
	cout << num1 * num2;

	return 0;
}