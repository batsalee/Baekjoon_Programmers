#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	std::vector<int> lis;
	lis.push_back(0);

	int input;
	while(N--) {
		cin >> input;
        
		if (lis.back() < input) lis.push_back(input);
		else *lower_bound(lis.begin(), lis.end(), input) = input;
	}

	cout << lis.size() - 1;

	return 0;
}