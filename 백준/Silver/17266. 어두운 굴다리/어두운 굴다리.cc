#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int N, M;
	cin >> N >> M;
			
	vector<int> x(M + 2, 0), ps(M + 2, 0);
	for (int i = 1; i < M + 1; i++) { cin >> x[i]; }	
	
	ps[1] = x[1];
	ps[M + 1] = N - x[M];

	for (int i = 2; i < M + 1; i++) {		
		ps[i] = ceil((x[i] - x[i - 1]) / 2.0);
	}

	cout << *max_element(ps.begin(), ps.end());

	return 0;
}