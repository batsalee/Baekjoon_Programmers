#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	string input;
	double sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> input;
		for (char& i : input) {
			if (i == '0' || i == '6' || i == '9') i = '9';			
		}
		sum += stoi(input) > 100 ? 100 : stoi(input);
	}

	cout << round(sum / N);	

	return 0;
}