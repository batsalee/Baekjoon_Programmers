#include <bits/stdc++.h>
using namespace std;

vector<int> vec, temp;
int N, M;
void recursion(int count, int start)
{	
	if (count == M) {
		for (int t : temp) { cout << t << ' '; }
		cout << '\n';
		return;
	}

	for (int i = start; i < N; i++) {
		temp[count] = vec[i];
		recursion(count + 1, i);
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	cin >> N >> M;
	vec.resize(N);
	temp.resize(M);

	for (int i = 0; i < N; i++) { cin >> vec[i]; }
	sort(vec.begin(), vec.end());

	recursion(0, 0);

	return 0;
}