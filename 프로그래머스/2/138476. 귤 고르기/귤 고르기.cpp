#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int solution(int k, vector<int> tangerine)
{
	map<int, int> m;
	for (int t : tangerine) { m[t]++; }

	vector<int> v;
	for (auto p : m) { v.push_back(p.second); }
	sort(v.begin(), v.end(), greater<>());

	int answer = 0, count = 0;
	for (int i = 0; count < k; i++) {
		answer++;
		count += v[i];
	}

	return answer;
}