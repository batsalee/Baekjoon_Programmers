#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	string time1, time2;
	cin >> time1 >> time2;

	int t1 = 3600 * stoi(time1.substr(0, 2)) + 60 * stoi(time1.substr(3, 2)) + stoi(time1.substr(6));
	int t2 = 3600 * stoi(time2.substr(0, 2)) + 60 * stoi(time2.substr(3, 2)) + stoi(time2.substr(6));
	
	if (t1 > t2) t2 += 86400;
	int duration = t2 - t1;
	int hour = duration / 3600;
	duration %= 3600;
	int minute = duration / 60;
	duration %= 60;
	int second = duration;

	if (hour < 10) cout << 0;
	cout << hour << ':';
	if (minute < 10) cout << 0;
	cout << minute << ':';
	if (second < 10) cout << 0;
	cout << second;

	return 0;
}