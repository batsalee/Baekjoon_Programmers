#include <bits/stdc++.h>
using namespace std;

void solve()
{
	map<string, string> seminar;
	seminar["Algorithm"] = "204";
	seminar["DataAnalysis"] = "207";
	seminar["ArtificialIntelligence"] = "302";
	seminar["CyberSecurity"] = "B101";
	seminar["Network"] = "303";
	seminar["Startup"] = "501";
	seminar["TestStrategy"] = "105";

	int N;
	cin >> N;

	string input;
	while (N--) {
		cin >> input;
		cout << seminar[input] << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}