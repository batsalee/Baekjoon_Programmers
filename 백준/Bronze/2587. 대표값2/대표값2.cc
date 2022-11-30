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
	std::vector<int> array(5);
	for (int i = 0; i < 5; i++)	{
		std::cin >> array[i];
	}

	sort(array);

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += array[i];
	}

	std::cout << sum / 5 << '\n' << array[array.size()/2];

	return 0;
}