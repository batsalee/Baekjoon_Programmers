#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	int S1, S2, S3;
	cin >> S1 >> S2 >> S3;

	vector<int> sum(S1 + S2 + S3 + 1, 0);
	for (int i = 1; i <= S1; i++) {
		for (int j = 1; j <= S2; j++) {
			for (int k = 1; k <= S3; k++) {
				sum[i + j + k]++;
			}
		}
	}

	cout << max_element(sum.begin(), sum.end()) - sum.begin();

	return 0;
}