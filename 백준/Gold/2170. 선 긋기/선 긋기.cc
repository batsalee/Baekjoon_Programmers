#include <iostream>
#include <vector>
#include <algorithm>

void fase()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
}

int main()
{
	fase();

	int N;
	std::cin >> N;

	// 선분이 몇개 입력될지 모르니 vector로
	// 입력된 좌표 x, y를 pair로 관리
	std::vector<std::pair<int, int>> lines;
	int x, y;
	while (N--) {
		std::cin >> x >> y;
		lines.push_back(std::pair(x, y));
	}

	// 좌표 (x, y)들을 x좌표순으로 오름차순정렬
	sort(lines.begin(), lines.end(), 
		[](std::pair<int, int> a, std::pair<int, int> b) { return a.first < b.first; }
	);

	int now_start = lines[0].first;
	int now_end = lines[0].second;
	int result = 0;
	for (int i = 1; i < lines.size(); i++) {		
		if (lines[i].first <= now_end) {
			now_end = std::max(now_end, lines[i].second);
		}
		else {
			result += (now_end - now_start);
			now_start = lines[i].first;
			now_end = lines[i].second;
		}			
	}
	result += (now_end - now_start); // 마지막 선분의 길이도 빼먹지 않고 더해주기

	std::cout << result;

	return 0;
}