#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;
	
	int D, M;
	cin >> D >> M;

	int day[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string days[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

	int nD = 1, nM = 1, i = 0;
	while (nD != D || nM != M) {
		i++;
		if (nD == day[nM]) {
			nD = 1;
			nM++;
		}
		else nD++;
	}

	cout << days[i % 7];

	return 0;
}