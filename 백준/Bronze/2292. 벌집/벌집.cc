#include <iostream>

using namespace std;

int main()
{
	
	int input;
	cin >> input;

	int standard = 1; // 다음칸의 최댓값
	int distance = 1; // 거리

	while (input > standard)
	{
		standard += 6 * distance;
		distance++;
	} 

	cout << distance;

	return 0;
}

/*
	1 은 1
	2~7은 2            6
	8~ 19는 3          18
	20~37은 4          36
	38~61은 5          60
*/

/*
	0은 0               1개
	1~6은 1             6개
	7~18은 2            12개
	19~36은 3           18개
	37~60은 4           24개
*/

/*
	flag = 1
	if N <= flag
		return i;
	else
		flag += 6*i;
*/