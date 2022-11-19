#include <iostream>

using namespace std;

int main()
{
	int h, m;

	cin >> h >> m;

	if (m >= 45) m -= 45;
	else if (m  < 45)
	{
		h -= 1;
		if (h == -1) h = 23;
		m = 60 + (m - 45);
	}

	cout << h << ' ' << m;

	return 0;
}