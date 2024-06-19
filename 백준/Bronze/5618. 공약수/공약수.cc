#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	int limit = *min_element(nums.begin(), nums.end());
	for (int i = 1; i <= limit; i++) {
		int flag = true;
		for (int n : nums) {
			if (n % i) {
				flag = false;
				break;
			}
		}

		if (flag) cout << i << '\n';
	}

    return 0;
}