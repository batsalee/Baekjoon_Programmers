#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	string bs = bitset<8 * sizeof(N)>(N).to_string();
	string binary = bs.substr(bs.find_first_not_of('0'));
	reverse(binary.begin(), binary.end());

	cout << stoi(binary, nullptr, 2);

	return 0;
}