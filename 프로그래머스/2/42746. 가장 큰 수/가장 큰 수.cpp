#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> numbers) {
	vector<string> v(numbers.size());
	transform(numbers.begin(), numbers.end(), v.begin(), [](int n) { return to_string(n); });
	sort(v.begin(), v.end(), [](const string& a, const string& b) { return a + b > b + a; });

	string answer = accumulate(v.begin(), v.end(), string{});
    return answer[0] != '0' ? answer : "0";
}