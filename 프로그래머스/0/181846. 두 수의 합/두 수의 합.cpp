#include <string>
#include <algorithm>
using namespace std;

string bigSum(string num1, string num2)
{
	string result = "";
	int temp = 0;
	while (!num1.empty() || !num2.empty() || temp) {
		if (!num1.empty()) {
			temp += num1.back() - '0';
			num1.pop_back();
		}
		if (!num2.empty()) {
			temp += num2.back() - '0';
			num2.pop_back();
		}
		result.push_back(temp % 10 + '0');
		temp /= 10;
	}
	reverse(result.begin(), result.end());

	return result;
}

string solution(string a, string b) {
    return bigSum(a, b);
}