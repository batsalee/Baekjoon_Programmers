#include <bits/stdc++.h>
using namespace std;
#include <array>

void solve()
{
	array<int, 20> cards;
	for (int i = 0; i < 20; i++) { cards[i] = i + 1; }

	int start, end;
	for (int i = 0; i < 10; i++) {
		cin >> start >> end;
		reverse(cards.begin() + start - 1, cards.begin() + end);
	}

	for (int c : cards) {
		cout << c << ' ';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}