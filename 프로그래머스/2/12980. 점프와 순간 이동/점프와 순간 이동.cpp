#include <iostream>
using namespace std;

int solution(int N)
{
	int K = 0;
	while (N > 0) {
		if (N & 1) {
			K++;
			N--;
		}
		else N /= 2;
	}

	return K;
}