#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> elements)
{
	vector<int> ps(elements.size() * 2 + 1, 0);
	for (int i = 0; i < ps.size() - 1; i++) {
		ps[i + 1] = ps[i] + elements[i % elements.size()];
	}

	set<int> s;
	for (int i = 1; i <= elements.size(); i++) {
		for (int j = i; j < ps.size(); j++) {
			s.insert(ps[j] - ps[j - i]);
		}
	}

	return s.size();
}