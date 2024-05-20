#include <bits/stdc++.h>
using namespace std;

int solution(string dirs) {
	set<pair<pair<int, int>, pair<int, int>>> s;
	pair<int, int> before{ 5, 5 };

	for (char d : dirs) {
		pair<int, int> after = before;
		if (d == 'U' && before.first > 0) after.first--;
		else if (d == 'D' && before.first < 10) after.first++;
		else if (d == 'L' && before.second > 0) after.second--;
		else if (d == 'R' && before.second < 10) after.second++;

		if (before != after) {
			pair<int, int> first, second;
			if (before < after) { first = before; second = after; }
			else { first = after; second = before; }
			s.insert({ first, second });
		}

		before = after;	
	}

	return s.size();
}