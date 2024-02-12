#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int price;
	cin >> price;
	
	int count = 0;
	int money = 1000 - price;
	count += money / 500; money %= 500;
	count += money / 100; money %= 100;
	count += money / 50; money %= 50;
	count += money / 10; money %= 10;
	count += money / 5; money %= 5;
	count += money / 1; money %= 1;

	cout << count;

	return 0;
}