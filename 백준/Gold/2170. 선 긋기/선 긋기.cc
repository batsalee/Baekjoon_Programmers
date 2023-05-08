#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N;
	std::cin >> N;

	std::vector<std::pair<int, int>> lines;
	int x, y;
	while (N--) {
		std::cin >> x >> y;
		lines.push_back(std::pair(x, y));
	}

	sort(lines.begin(), lines.end(), 
		[](std::pair<int, int> a, std::pair<int, int> b) 
		{ if (a.first == b.first) return a.second < b.second; 
		else return a.first < b.first; }
	);

	int start = lines[0].first;
	int end = lines[0].second;
	int result = 0;
	for (int i = 1; i < lines.size(); i++) {		
		if (lines[i].first <= end) {
			end = std::max(end, lines[i].second);
		}
		else {
			result += (end - start);
			start = lines[i].first;
			end = lines[i].second;
		}			
	}
	result += (end - start);

	std::cout << result;

	return 0;
}