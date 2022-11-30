#include <iostream>
#include <vector>

void swap(int& val1, int& val2) {
    int tmp = val1;
    val1 = val2;
    val2 = tmp;
}

void heapify(std::vector<int>& arr, int len, int parent) {
    int largest = parent;
    int left = 2 * parent + 1;
    int right = 2 * parent + 2;

    if (left < len && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < len && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != parent) {

        swap(arr[parent], arr[largest]);

        heapify(arr, len, largest);
    }
}

void heapSort(std::vector<int>& arr, int len, int cut) {

    for (int i = len / 2 - 1; i >= 0; i--) {
        heapify(arr, len, i);
    }

    for (int i = len - 1; i >= len-cut; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
        if (i == len - cut) std::cout << arr[i];
    }
}

int main()
{
	int student_num, cutline_num;
	std::cin >> student_num >> cutline_num;

	std::vector<int> array(student_num);
	for (int i = 0; i < student_num; i++)	{
		std::cin >> array[i];
	}

	heapSort(array, student_num, cutline_num);

	return 0;
}