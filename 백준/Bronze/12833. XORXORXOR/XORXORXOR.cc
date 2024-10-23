#include <bits/stdc++.h>

int main()
{
	int A, B, C;
	std::cin >> A >> B >> C;
	std::cout << (C & 1 ? A ^ B : A);

	return 0;
}