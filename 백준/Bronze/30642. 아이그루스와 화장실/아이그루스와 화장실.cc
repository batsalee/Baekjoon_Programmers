#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int N, K;
	string name;
	cin >> N >> name >> K;

	if (name == "induck") {
		if (K == 1) cout << 2;
		else if (K & 1) cout << K - 1;
		else cout << K;
	}
	else if (name == "annyong") {
		if (K & 1) cout << K;
		else cout << K - 1;
	}

	return 0;
}