#include <vector>

int solution(std::vector<std::vector<int>> dots) {
    double slope1to2 = (double)(dots[0][1] - dots[1][1]) / (dots[0][0] - dots[1][0]);
    double slope1to3 = (double)(dots[0][1] - dots[2][1]) / (dots[0][0] - dots[2][0]);
    double slope1to4 = (double)(dots[0][1] - dots[3][1]) / (dots[0][0] - dots[3][0]);
    double slope2to3 = (double)(dots[1][1] - dots[2][1]) / (dots[1][0] - dots[2][0]);
    double slope2to4 = (double)(dots[1][1] - dots[3][1]) / (dots[1][0] - dots[3][0]);
    double slope3to4 = (double)(dots[2][1] - dots[3][1]) / (dots[2][0] - dots[3][0]);

	if (slope1to2 == slope3to4) return 1;
	if (slope1to3 == slope2to4) return 1;
	if (slope1to4 == slope2to3) return 1;
    return 0;
}