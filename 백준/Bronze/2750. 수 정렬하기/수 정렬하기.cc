#include <iostream>
#include <vector>

void sort(std::vector<int>& arr)
{
	// insertion sort 아무것도 안보고 직접 구현해보기
	for (int i = 1; i < arr.size(); i++) {
		int temp = arr[i];
		int j = i;
		while (j && arr[j-1] > temp) {
				arr[j] = arr[j - 1];
				j--;
		}	
		arr[j] = temp;
	}
}

int main()
{
	int input;
	std::cin >> input;

	std::vector<int> array(input);
	for (int i = 0; i < input; i++)	{
		std::cin >> array[i];
	}

	sort(array);

	for (int i : array) {
		std::cout << i << std::endl;
	}

	return 0;
}