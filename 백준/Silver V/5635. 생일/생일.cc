#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;

	vector<pair<string, string>> man(n);
	string name, dd, mm, yyyy;	
	for (int i = 0; i < n; i++) {
		cin >> name >> dd >> mm >> yyyy;
		
		if (mm.length() == 1) mm = '0' + mm;
		if (dd.length() == 1) dd = '0' + dd;
		string metadata = yyyy + '-' + mm + '-' + dd;

		man[i] = {metadata, name};
	}

	sort(man.begin(), man.end());
	cout << man.back().second << '\n' << man.front().second;

	return 0;
}