#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int Q[4] = { 0 }, AXIS = 0;
	int N;
	cin >> N;
	
	int x, y;
	while (N--) {		
		cin >> x >> y;
		if (x == 0 || y == 0) AXIS++;
		else if (x > 0 && y > 0) Q[0]++;
		else if (x < 0 && y > 0) Q[1]++;
		else if (x < 0 && y < 0) Q[2]++;
		else if (x > 0 && y < 0) Q[3]++;
	}

	cout << "Q1: " << Q[0] << '\n' << "Q2: " << Q[1] << '\n' << "Q3: "
		<< Q[2] << '\n' << "Q4: " << Q[3] << '\n' << "AXIS: " << AXIS;

	return 0;
}