#include <bits/stdc++.h>
using namespace std;

bool solution(vector<string> phone_book) {
	sort(phone_book.begin(), phone_book.end(), [](string& a, string& b) {
		return a.length() < b.length();		
		}
	); // 길이가 더 긴 문자열은 길이가 더 짧은 문자열의 접두어가 될 수 없으므로

	unordered_set<string> us;
	us.insert(phone_book[0]);

	for (int i = 1; i < phone_book.size(); i++) {
		for (int j = 1; j < phone_book[i].size(); j++) {
			if (us.find(phone_book[i].substr(0, j)) != us.end()) return false;			
		}
		us.insert(phone_book[i]);
	}

	return true;
}