#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> num, temp;
void recursion(int count)
{
	if (count == M) {
		for (int t : temp) { 
			cout << t << ' '; 		
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < N; i++) {
		temp[count] = num[i];
		recursion(count + 1);
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	cin >> N >> M;
	num.resize(N);
	temp.resize(M);	
	
	for (int i = 0; i < N; i++) { cin >> num[i]; }
	sort(num.begin(), num.end());

	recursion(0);

	return 0;
}