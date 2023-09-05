#include <bits/stdc++.h>
using namespace std;

void solve()
{
	char input;
	cin >> input;

	switch (input) {
	case 'M': {
		cout << "MatKor";
		break;
	}
	case 'W': {
		cout << "WiCys";
		break;
	}
	case 'C': {
		cout << "CyKor";
		break;
	}
	case 'A': {
		cout << "AlKor";
		break;
	}
	case '$': {
		cout << "$clear";
		break;
	}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}