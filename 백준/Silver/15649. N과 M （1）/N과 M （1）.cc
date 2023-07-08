#include <bits/stdc++.h>
using namespace std;

int N, M;
bool checked[9];
int now_arr[9];

void recursion(int count)
{
	if (count == M) {
		for (int i = 0; i < M; i++) {
			cout << now_arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (checked[i] == false) { // 현재 선택된 상태인지
			checked[i] = true;
			now_arr[count] = i;
			recursion(count + 1);
			checked[i] = false;
		}
	}
}

void solve()
{
	cin >> N >> M;
	recursion(0);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}