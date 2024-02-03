#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);

	if (isalpha(s[0])) s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++) {
		if (s[i - 1] == ' ' && isalpha(s[i])) s[i] = toupper(s[i]);
	}

    return s;
}