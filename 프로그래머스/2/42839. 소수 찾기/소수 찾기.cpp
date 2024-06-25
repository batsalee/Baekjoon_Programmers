#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
set<int> s;
string now;

bool isPrime(int n)
{
	if (n < 2) return false;

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void dfs(string& numbers, int i)
{
	visited[i] = true;
	now.push_back(numbers[i]);
	s.insert(stoi(now));

	for (int i = 0; i < numbers.size(); i++) {
		if(!visited[i])	dfs(numbers, i);
	}

	visited[i] = false;
	now.pop_back();
}

int solution(string numbers) {
	visited.resize(numbers.size(), false);
	for (int i = 0; i < numbers.size(); i++) {
		dfs(numbers, i);
	}

	int answer = 0;
	for (int n : s) {
		if (isPrime(n)) answer++;
	}

	return answer;
}