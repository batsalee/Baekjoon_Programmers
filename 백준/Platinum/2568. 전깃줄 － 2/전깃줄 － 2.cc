#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, int>> line;
	int f, s;
	for (int i = 0; i < N; i++) {
		cin >> f >> s;
		line.push_back({ f, s });
	}
	sort(line.begin(), line.end());

	vector<int> LIS(1, line[0].second);
	vector<int> index(1, 0);
	for (int i = 1; i < line.size(); i++) {
		if (LIS.back() < line[i].second) {
			index.push_back(LIS.size());
			LIS.push_back(line[i].second);			
		}
		else {
			auto itr = lower_bound(LIS.begin(), LIS.end(), line[i].second);
			*itr = line[i].second;
			index.push_back(itr - LIS.begin());
		}
	}
		
	// result	
	cout << line.size() - LIS.size() << '\n';
	vector<int> result;
	int check = LIS.size() - 1;
	for (int i = index.size() - 1; i >= 0; i--) {
		if (index[i] == check) check--;
		else result.push_back(line[i].first);
	}

	for (auto ritr = result.rbegin(); ritr != result.rend(); ritr++) {
		cout << *ritr << '\n';
	}
	
	return 0;
}