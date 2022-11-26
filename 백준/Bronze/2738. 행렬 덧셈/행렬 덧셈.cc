#include <iostream>
#include <vector>

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::vector<int> array(2*N*M);
	
	for (int i = 0; i < 2 * N * M; i++)
	{
		std::cin >> array[i];
	}

	for (int i = 0; i < N * M; i++)
	{
		std::cout << array[i] + array[N * M + i] << ' ';
		if (i % M == M-1) std::cout << std::endl;
	}

	return 0;
}