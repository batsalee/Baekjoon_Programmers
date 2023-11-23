#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int N;
	cin >> N;

	vector<pair<int, string>> vec;
	vec.push_back(make_pair(0, "Adrian"));
	vec.push_back(make_pair(0, "Bruno"));
	vec.push_back(make_pair(0, "Goran"));

	string Adrian = "", Bruno = "", Goran = "";
	for (int i = 0; i < 34; i++) { Adrian += "ABC"; }
	for (int i = 0; i < 25; i++) { Bruno += "BABC"; }
	for (int i = 0; i < 17; i++) { Goran += "CCAABB"; }

	string answer;
	cin >> answer;

	for (int i = 0; i < N; i++) {
		if (answer[i] == Adrian[i]) vec[0].first++;
		if (answer[i] == Bruno[i]) vec[1].first++;
		if (answer[i] == Goran[i]) vec[2].first++;
	}

	sort(vec.begin(), vec.end(), [](pair<int, string> a, pair<int, string> b) { return a.first > b.first; });

	cout << vec[0].first << '\n' << vec[0].second;
	if (vec[1].first == vec[0].first) cout << '\n' << vec[1].second;
	if (vec[2].first == vec[1].first && vec[1].first == vec[0].first) cout << '\n' << vec[2].second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}