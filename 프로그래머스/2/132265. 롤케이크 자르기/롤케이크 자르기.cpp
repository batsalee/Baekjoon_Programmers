#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> topping) {
	int answer = 0;
	unordered_map<int, int> l, r;
	for (int t : topping) { r[t]++; }

	for (int i = 0; i < topping.size(); i++) {
		l[topping[i]]++; r[topping[i]]--;
		if (r[topping[i]] == 0) r.erase(topping[i]);

		if (l.size() == r.size()) answer++;
	}

	return answer;
}