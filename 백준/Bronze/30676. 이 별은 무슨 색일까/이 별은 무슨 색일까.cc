#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int star;
	cin >> star;

	if (star >= 620) cout << "Red";
	else if (star >= 590) cout << "Orange";
	else if (star >= 570) cout << "Yellow";
	else if (star >= 495) cout << "Green";
	else if (star >= 450) cout << "Blue";
	else if (star >= 425) cout << "Indigo";
	else if (star >= 380) cout << "Violet";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}