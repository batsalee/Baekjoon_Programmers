#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	string input;
	cin >> input;

	stringstream ss;
	ss.str(input);
	
	int result;
	if (input[0] == '0' && input[1] == 'x') ss >> hex >> result;
	else if (input[0] == '0') ss >> oct >> result;
	else ss >> dec >> result;

	cout << result;
	
	return 0;
}