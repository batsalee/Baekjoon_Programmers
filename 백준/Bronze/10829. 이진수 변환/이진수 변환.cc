#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	long long N;
	cin >> N;
	
	string binary = bitset<8 * sizeof(N)>(N).to_string();
	cout << binary.substr(binary.find_first_not_of('0'));
	
	return 0;
}