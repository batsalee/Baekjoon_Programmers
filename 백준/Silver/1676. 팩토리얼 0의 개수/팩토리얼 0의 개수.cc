#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;
	
	int count_2 = 0, count_5 = 0;
	for (int i = 2; i <= N; i++) {
		int num = i;
		while (true) {
			if (num % 2 == 0) {
				count_2++;
				num /= 2;
			}
			else if (num % 5 == 0) {
				count_5++;
				num /= 5;
			}
			else break;
		}
	}

	cout << min(count_2, count_5);

	return 0;
}