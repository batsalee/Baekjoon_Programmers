#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
	int answer = 0;	
	for (int i = 0; i <= discount.size() - 10; i++) {
		map<string, int> dis;
		for (int j = i; j < i + 10; j++) {
			dis[discount[j]]++;
		}

		int k;
		for (k = 0; k < number.size(); k++) {
			if (dis[want[k]] < number[k]) break;
		}
		if (k == number.size()) answer++;
	}

	return answer;
}