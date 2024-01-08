#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	string nomal, key;
	getline(cin, nomal);
	cin >> key;

	for (int i = 0; i < nomal.size(); i++) {
		if (nomal[i] > key[i % key.size()]) cout << char('a' + nomal[i] - key[i % key.size()] - 1);
		else if (nomal[i] == ' ') cout << ' ';
		else cout << char('a' + nomal[i] - key[i % key.size()] - 1 + 26);
	}

	return 0;
}