#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	int time;
	char name;
	string result;		

	int right_count = 0, penalty = 0;
	map<char, int> wrong_info;
	while (true) {
		cin >> time;
		if (time == -1) break;

		cin >> name >> result;		
		if (result == "wrong") wrong_info[name]++;
		else if (result == "right") {
			right_count++;
			penalty += (time + 20 * wrong_info[name]);
		}
	}

	cout << right_count << ' ' << penalty;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}