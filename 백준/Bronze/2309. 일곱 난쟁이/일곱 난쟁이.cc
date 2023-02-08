#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> heights(9);
	int sum = -100;
	for (int i = 0; i < heights.size(); i++) {
		std::cin >> heights[i];
		sum += heights[i];
	}

	sort(heights.begin(), heights.end());

	int liar_index1= -1, liar_index2= -1;
	for (int i = 0; i < heights.size() - 1; i++) {
		for (int j = i + 1; j < heights.size(); j++) {				
			if (sum == heights[i] + heights[j]) {
				liar_index1 = i;
				liar_index2 = j;
				break;
			}
		}
		if (liar_index1 != -1) break;
	}

	for (int i = 0; i < heights.size(); i++) {
		if (i == liar_index1 || i == liar_index2) continue;
		
		std::cout << heights[i] << '\n';
	}

	return 0;
}