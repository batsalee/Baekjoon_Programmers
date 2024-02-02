#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int T;
	cin >> T;

	int N, M;
	string str;
	int result;
	while (T--) {
		result = 0;

		cin >> N >> M;
		for (int i = N; i <= M; i++) {
			str = to_string(i);
			result += count(str.begin(), str.end(), '0');
		}

		cout << result << '\n';
	}

	return 0;
}