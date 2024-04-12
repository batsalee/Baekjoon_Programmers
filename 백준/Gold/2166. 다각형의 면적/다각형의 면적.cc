#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
    
	int N;
	cin >> N;

	vector<long long> x(N + 1), y(N + 1);
	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}
	x[N] = x[0];
	y[N] = y[0];

	long long diff = 0;
	for (int i = 0; i < N; i++) {
		diff = diff + (x[i] * y[i + 1]) - (x[i + 1] * y[i]);
	}

	cout << fixed;
	cout.precision(1);
	cout << abs(diff) / 2.0;

    return 0;
}