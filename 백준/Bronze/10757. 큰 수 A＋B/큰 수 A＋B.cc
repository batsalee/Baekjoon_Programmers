#include <iostream>
#include <string>

using namespace std;

int main()
{
	string num1, num2;
	cin >> num1 >> num2;

	// num1과 num2의 자릿수가 다르면 작은쪽 앞에 0 붙여서 같게 맞춰 줌
	if (num1.length() > num2.length()) num2 = string(num1.length() - num2.length(), '0') + num2;
	else if (num1.length() < num2.length()) num1 = string(num2.length() - num1.length(), '0') + num1;

	int sum = 0;
	int upper = 0;
	string result = "";
	for (int i = num1.length()-1; i >= 0; i--)
	{
		sum = (num1[i] - '0') + (num2[i] - '0') + upper;
		if (sum >= 10)
		{
			upper = sum / 10;
			sum %= 10;
		}
		else
		{
			upper = 0;
		}
		result = to_string(sum) + result;
	}

	if (upper > 0) result = to_string(upper) + result;

	cout << result;

	return 0;
}