#include <iostream>

using namespace std;

int main()
{
	int h, m, howlong;

	cin >> h >> m >> howlong;

	m += howlong;

	while(m >= 60)
	{ 
		h += 1;
		m = m - 60;
	}

	if (h >= 24) h -= 24;	

	cout << h << ' ' << m;

	return 0;
}