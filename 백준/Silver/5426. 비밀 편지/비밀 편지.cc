#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		string input;
		cin >> input;

		int repeat = sqrt(input.size());
		int start_index = repeat - 1;
		int now_index = start_index;
		while (start_index >= 0) {
			cout << input[now_index];
			now_index += repeat;
			if (now_index >= input.size()) {
				start_index--;
				now_index = start_index;
			}
		}

		cout << '\n';
	}

	return 0;
}