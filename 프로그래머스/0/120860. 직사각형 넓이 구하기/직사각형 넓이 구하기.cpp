#include <vector>
using namespace std;

int solution(vector<vector<int>> dots) {
    int maxX = max( max(dots[0][0], dots[1][0]), max(dots[2][0], dots[3][0]) );
    int minX = min( min(dots[0][0], dots[1][0]), min(dots[2][0], dots[3][0]) );
    int maxY = max( max(dots[0][1], dots[1][1]), max(dots[2][1], dots[3][1]) );
    int minY = min( min(dots[0][1], dots[1][1]), min(dots[2][1], dots[3][1]) );
    
    return (maxX - minX) * (maxY - minY);
}