#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N; 
	cin >> N;
	vector<string> v(N);
	for (int i = 0; i < N; i++) { cin >> v[i]; }

	sort(v.begin(), v.end(), [](const string& a, const string& b) { return a + b > b + a; });
	string answer = accumulate(v.begin(), v.end(), string{});
	cout << (answer[0] != '0' ? answer : "0");

	return 0;
}