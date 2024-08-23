#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	array<int, 5> input;
	for (int i = 0; i < 5; i++) {
		cin >> input[i];
	}

	vector<int> lcms;
	for (int i = 0; i <= 2; i++) {
		for (int j = i + 1; j <= 3; j++) {
			for (int k = j + 1; k <= 4; k++) {
				lcms.push_back(lcm(lcm(input[i], input[j]), input[k]));
			}
		}
	}

	cout << *min_element(lcms.begin(), lcms.end());

	return 0;
}