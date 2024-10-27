#include <bits/stdc++.h>
using namespace std;

int main()
{
	string input;
	cin >> input;

	int ball[] = { 1, 0, 0 };
	for (char& c : input) {
		if (c == 'A') swap(ball[0], ball[1]);
		else if (c == 'B') swap(ball[1], ball[2]);
		else if (c == 'C') swap(ball[0], ball[2]);	
	}

	for (int i = 0; i < 3; i++) {
		if (ball[i]) cout << i + 1;
	}

	return 0;	
}