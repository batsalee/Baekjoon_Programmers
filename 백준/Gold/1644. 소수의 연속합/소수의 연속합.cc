#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N; 
	cin >> N;
	
	vector<bool> check_primenum(N + 1, true);
	check_primenum[0] = false;
	check_primenum[1] = false;
	for (int i = 2; i <= sqrt(N); i++) {
		if (check_primenum[i]) {
			for (int j = 2 * i; j <= N; j += i) {
				check_primenum[j] = false;
			}
		}
	}
	
	vector<int> PS(1, 0);
	for (int i = 0; i < N + 1; i++) {
		if (check_primenum[i]) PS.push_back(PS.back() + i);
	}
	
	int count = 0, l = 1, r = 1;
	while (l < PS.size() && r < PS.size()) {
		int sum = PS[r] - PS[l - 1];
		if (sum == N) {
			count++;
			l++;
		}
		else if (sum < N) r++;
		else if (sum > N) l++;
	}

	cout << count;
	
	return 0;
}