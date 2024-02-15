#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{	
	queue<int> q;
	for (int p : progresses) {
		q.push(p);
	}

	vector<int> answer;
	int index = 0, day = 1, release = 0;
	while (q.size()) {		
		if (q.front() + day * speeds[index] >= 100) {
			index++;
			release++;
			q.pop();
		}
		else {		
			if (release > 0) {
				answer.push_back(release);
				release = 0;
			}
			day++;
		}
	}

	if (release > 0) answer.push_back(release);

	return answer;
}