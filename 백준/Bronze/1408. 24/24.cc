#include <bits/stdc++.h>
using namespace std;

int main()
{
	int h1, m1, s1, h2, m2, s2;
	scanf("%d:%d:%d", &h1, &m1, &s1);
	scanf("%d:%d:%d", &h2, &m2, &s2);

	int time_point_1 = 3600 * h1 + 60 * m1 + s1;
	int time_point_2 = 3600 * h2 + 60 * m2 + s2;
	if (time_point_1 > time_point_2) time_point_2 += 86400;

	int duration = time_point_2 - time_point_1;
	printf("%02d:%02d:%02d", duration / 3600, duration % 3600 / 60, duration % 60);

	return 0;
}