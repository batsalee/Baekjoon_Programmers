#include <vector>
#include <algorithm>

int solution(std::vector<int> array, int n) {
    return count(array.begin(), array.end(), n);
}