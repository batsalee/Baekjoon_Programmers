#include <iostream>

int main()
{
	int H[11], Y;
	std::cin >> H[0] >> Y;

	for (int i = 1; i <= Y; i++) {
		H[i] = (int)(H[i - 1] * 1.05);
		if (i >= 3) H[i] = std::max(H[i], (int)(H[i - 3] * 1.2));
		if (i >= 5) H[i] = std::max(H[i], (int)(H[i - 5] * 1.35));		
	}

	std::cout << H[Y];

	return 0;
}