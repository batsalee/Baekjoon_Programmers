#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string input;
	cin >> input;
	
	int joi = 0, ioi = 0;
	regex re("(?=(JOI|IOI))");
	sregex_iterator itr(input.begin(), input.end(), re);
	sregex_iterator end;

	while (itr != end) {		
		if (itr->str(1) == "JOI") joi++;
		else if (itr->str(1) == "IOI") ioi++;
		itr++;
	}

	cout << joi << '\n' << ioi;
}