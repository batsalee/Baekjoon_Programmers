#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, result = 0, l = 1, r = 1, sum = 1;
	cin >> N;

	while (r <= N) {
		if(sum == N) result++;
		
		if(sum <= N) sum += (++r);
		else sum -= (l++);
	}

	cout << result;
	return 0;
}