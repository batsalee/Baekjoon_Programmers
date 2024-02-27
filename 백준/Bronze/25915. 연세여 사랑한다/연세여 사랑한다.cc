#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string input;
	cin >> input;
	input += "ILOVEYONSEI";

	int distance_sum = 0;
	for (int i = 1; i < input.size(); i++) {
		distance_sum += abs(input[i] - input[i - 1]);
	}

	cout << distance_sum;

	return 0;
}