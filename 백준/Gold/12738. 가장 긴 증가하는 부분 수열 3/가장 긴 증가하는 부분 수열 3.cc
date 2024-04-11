#include <bits/stdc++.h>
using namespace std;

#define INF 1000000001

int main()
{
	int N;
	cin >> N;

	std::vector<int> lis;
	lis.push_back(-INF);

	int input;
	while(N--) {
		cin >> input;
		if (lis.back() < input) lis.push_back(input);
		else *lower_bound(lis.begin(), lis.end(), input) = input;
	}

	cout << lis.size() - 1;

	return 0;
}