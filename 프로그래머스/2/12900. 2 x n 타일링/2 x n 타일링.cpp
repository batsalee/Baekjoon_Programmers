#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
	if (n == 1) return 1;

	int a_2, a_1 = 1, answer = 2;
	for (int i = 3; i <= n; i++) {
		a_2 = a_1 % 1000000007;
		a_1 = answer % 1000000007;
		answer = (a_2 + a_1) % 1000000007;
	}

	return answer;
}