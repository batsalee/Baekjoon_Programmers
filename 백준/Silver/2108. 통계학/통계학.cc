#include <vector>
#include <unordered_map>
#include <algorithm> // sort
#include <cmath> // round
#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int input_count;
	std::cin >> input_count;

	std::vector<int> array(input_count);
	std::unordered_map<int, int> frequncy;

	double sum = 0;
	for (int i = 0; i < input_count; i++) {
		std::cin >> array[i];
		sum += array[i]; // 평균을 위해 미리미리 더해줌
		frequncy[array[i]]++; // 빈도수 계산을 위해 미리미리 체크
	}

	// 산술평균
	double average = round(sum / input_count);
	if (average == -0) std::cout << '0' << '\n';
	else std::cout << average << '\n';

	// 중앙값
	sort(array.begin(), array.end());
	std::cout << array[input_count / 2] << '\n';

	// 최빈값, 단 여러개면 최빈값 중 두번째로 작은 값
	std::vector<std::pair<int, int>> freq_vec(frequncy.begin(), frequncy.end());
	sort(freq_vec.begin(), freq_vec.end(),
		[](std::pair<int, int> a, std::pair<int, int> b)
		{
			if (a.second == b.second) return a.first > b.first;
			return a.second > b.second;
		}
	);

	int max = 0;
	for(auto itr = freq_vec.begin(); itr!=freq_vec.end(); itr++) {
		if (itr->second == freq_vec[max].second) max = itr - freq_vec.begin();
		else break;		
	}
	if (max != 0) std::cout << freq_vec[max - 1].first << '\n';
	else std::cout << freq_vec[0].first << '\n';
	
	// 최댓값 - 최솟값
	std::cout << array[input_count - 1] - array[0] << '\n';

	return 0;
}