#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	string S;
	cin >> N >> S;

	string name, answer, correct;
	int index;
	vector<pair<string, string>> chat(N);
	for (int i = 0; i < N; i++) {
		cin >> name >> answer;
		chat[i] = { name, answer };

		if (name == S) {
			correct = answer;
			index = i;
		}
	}

	int result = 0;
	for (int i = 0; i < index; i++) {
		if (chat[i].second == correct) result++;
	}

	cout << result;

	return 0;
}