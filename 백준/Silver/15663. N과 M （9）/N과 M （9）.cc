#include <bits/stdc++.h>
using namespace std;

vector<int> vec, temp;
vector<bool> visited;
int N, M;
set<vector<int>> s;
void recursion(int count)
{	
	if (count == M) {		
		s.insert(temp);
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
	for (auto& v : s) {
		for (auto& i : v) {
			cout << i << ' ';
		}
		cout << '\n';
	}

	return 0;
}