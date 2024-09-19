#include <bits/stdc++.h>
using namespace std;

int main()
{
	string n, m;
	getline(cin, n, ':');
	getline(cin, m);
	cout << stoi(n) / gcd(stoi(n), stoi(m)) << ':' << stoi(m) / gcd(stoi(n), stoi(m));

	return 0;
}