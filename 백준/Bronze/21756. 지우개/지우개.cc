#include <bits/stdc++.h>
using namespace std;

vector<int> foo(vector<int>& v)
{
	vector<int> result;
	for (int i = 1; i < v.size(); i += 2) {
		result.push_back(v[i]);
	}

	return result;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		v[i] = i + 1;
	}

	while (v.size() > 1) {
		v = foo(v);
	}

	cout << v[0];

	return 0;
}