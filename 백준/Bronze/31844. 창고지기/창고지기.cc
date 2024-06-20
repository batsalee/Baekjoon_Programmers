#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

	int robot, box, target;
	char c;
	for (int i = 0; i < 10; i++) {
		cin >> c;
		if (c == '@') robot = i;
		else if (c == '#') box = i;
		else if (c == '!') target = i;
	}

	if (box < min(robot, target) || box > max(robot, target)) cout << -1;
	else cout << abs(target - robot) - 1;

    return 0;
}