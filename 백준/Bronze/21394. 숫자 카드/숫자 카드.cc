#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int T;
	cin >> T;

	array<int, 10> nums;
	while (T--) {
		int count = 0;
		for (int i = 1; i < 10; i++) {
			cin >> nums[i];
			count += nums[i];
		}
		nums[9] += nums[6];
		nums[6] = 0;
		
		vector<int> result(count);
		int l = 0, r = count - 1, pos = 0;		
		for (int i = 9; i >= 1; i--) {
			while (nums[i]) {
				result[pos] = i;
				nums[i]--;
				
				if (pos == l) {
					pos = r;
					l++;
				}
				else {
					pos = l;
					r--;
				}
			}
		}

		for (int r : result) {
			cout << r << ' ';
		}
		cout << '\n';
	}

	return 0;
}