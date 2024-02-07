#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	while (true) {
		string N;
		cin >> N;
		if (N == "0") break;
		
		int answer = 1;
		for (char& c : N) {
			if (c == '1') answer += 2;
			else if (c == '0') answer += 4;
			else answer += 3;

			answer += 1;
		}

		cout << answer << '\n';
	}

	return 0;
}