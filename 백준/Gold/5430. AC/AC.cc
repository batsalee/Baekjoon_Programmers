#include <bits/stdc++.h>
#include <regex>
using namespace std;

void solve()
{
	int T;
	cin >> T;

	while (T--) {		
		string p; cin >> p;
		int size; cin >> size;
		string nums; cin >> nums;

		deque<int> dq;
		int isReverse = 0;

		nums = regex_replace(nums, regex(","), " ");
		nums[0] = ' ';
		nums.pop_back();
		
		stringstream ss(nums);
		ss.str(nums);
		int num;
		while (ss >> num) {
			dq.push_back(num);
		}

		int error = 0;
		for (char c : p) {
			if (c == 'R') isReverse ^= 1;
			else if (c == 'D') {
				if (dq.empty()) {
					error = 1;
					break;
				}

				if (isReverse) dq.pop_back();
				else dq.pop_front();
			}
		}

		if (error) {
			cout << "error" << '\n';
			continue;
		}
		else if (isReverse) reverse(dq.begin(), dq.end());

		cout << '[';			
		for (int i = 0; i < dq.size(); i++) {
			cout << dq[i];
			if (i < dq.size() - 1) cout << ',';
		}		
		cout << ']' << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}