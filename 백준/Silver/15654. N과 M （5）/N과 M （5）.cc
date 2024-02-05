#include <bits/stdc++.h>
using namespace std;

vector<int> vec, temp;
vector<bool> visited;
int N, M;
void recursion(int count)
{
	// 현재 1789 들어있고 M은 2일때
	
	if (count == M) {
		for (int t : temp) { cout << t << ' '; }
		cout << '\n';
		return;
	}
	
	for (int i = 0; i < N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			temp[count] = vec[i];
			recursion(count + 1);
			visited[i] = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	cin >> N >> M;
	vec.resize(N);
	temp.resize(M);
	visited.resize(N);

	for (int i = 0; i < N; i++) { cin >> vec[i]; }
	sort(vec.begin(), vec.end());

	recursion(0);

	return 0;
}