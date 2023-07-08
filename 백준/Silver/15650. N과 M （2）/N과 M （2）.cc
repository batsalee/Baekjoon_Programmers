#include <bits/stdc++.h>
using namespace std;

int N, M;
int now_arr[9];
bool checked[9];

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
		if (count == 0 || (checked[i] == false && now_arr[count-1] < i)) { // now_arr에 들어있지 않다면
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