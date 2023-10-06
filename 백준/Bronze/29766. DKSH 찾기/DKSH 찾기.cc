#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string input;
	cin >> input;
	
	int count = 0;
	if (input.size() >= 4) {
		for (int i = 0; i <= input.size() - 4; i++) {
			if (input.substr(i, 4) == "DKSH") count++;
		}
	}	
		
	cout << count;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}
