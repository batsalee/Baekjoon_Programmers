#include <iostream>

using namespace std;

int main()
{
	int origin;
	cin >> origin;

	int cicle = 0;
	int calculating = origin;

	do {
		calculating = 10 * (calculating % 10) + ((calculating/10 + calculating%10))%10;
		cicle++;
	} while (origin != calculating);

	cout << cicle;
}