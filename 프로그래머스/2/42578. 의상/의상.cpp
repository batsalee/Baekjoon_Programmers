#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<string>> clothes) {
	unordered_map<string, int> um;
	for (int i = 0; i < clothes.size(); i++) {
		um[clothes[i][1]]++;
	}

	int answer = 1;
	for (auto& p : um) {
		answer *= p.second + 1;
	}

	return answer - 1;
}