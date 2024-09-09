#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	map<string, double> m = {
		{"A+", 4.3}, {"A0", 4.0}, {"A-", 3.7},
		{"B+", 3.3}, {"B0", 3.0}, {"B-", 2.7},
		{"C+", 2.3}, {"C0", 2.0}, {"C-", 1.7},
		{"D+", 1.3}, {"D0", 1.0}, {"D-", 0.7},
		{"F", 0.0} };

	int N;
	cin >> N;

	string subject_name, grade;
	int credit, credit_sum = 0;
	float result = 0;
	while(N--) {
		cin >> subject_name >> credit >> grade;
		result += credit * m[grade];
		credit_sum += credit;
	}

	result /= credit_sum;
	cout << fixed;
	cout.precision(2);
	cout << result;
	
	return 0;
}