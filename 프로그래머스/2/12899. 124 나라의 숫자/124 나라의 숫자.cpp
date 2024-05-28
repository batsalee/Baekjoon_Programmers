#include <bits/stdc++.h>
using namespace std;

string solution(int n) {
	string answer = "";
	while (n) {
		char c = '0' + (n % 3);
		if (c == '0') { c = '4'; n -= 1; }
		answer = c + answer;
		n /= 3;
	}

	return answer;
}