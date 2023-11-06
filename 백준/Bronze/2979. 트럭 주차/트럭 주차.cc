#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int A, B, C;
	cin >> A >> B >> C;

	int many[100] = {0};
	for (int i = 0; i < 3; i++) {
		int s, e;
		cin >> s >> e;
		for (int j = s; j < e; j++) {
			many[j]++;
		}
	}

	int result = 0;
	for (int i = 0; i < 100; i++) {
		if (many[i] == 3) result += C * 3;
		else if (many[i] == 2) result += B * 2;
		else if (many[i] == 1) result += A;
	}

	cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}