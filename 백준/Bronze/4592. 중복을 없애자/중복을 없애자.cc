#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	int count, input;
	do {
		cin >> count;
		if(count == 0)  break;

		vector<int> inputs;
		while (count--) {
			cin >> input;
			if(inputs.empty() || inputs.back() != input) inputs.push_back(input);
		}
		for (int i : inputs) {
			cout << i << ' ';
		}
		cout << "$\n";

	} while (true);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}