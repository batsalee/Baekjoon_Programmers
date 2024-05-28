#include <bits/stdc++.h>
using namespace std;

int solution(int storey) {
	int answer = 0;
	while (storey) {
		int now = storey % 10;
		storey /= 10;

		if (now > 5) {
			storey += 1;
			answer += 10 - now;
		}
		else if (now < 5) {
			answer += now;
		}
		else {
			if (storey % 10 >= 5) {
				storey += 1;
				answer += 5;
			}
			else answer += 5;
		}
	}

	return answer;
}