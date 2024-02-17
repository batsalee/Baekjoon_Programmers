#include <vector>
#include <algorithm>

int solution(std::vector<int> array) {
    sort(array.begin(), array.end());
    return array.at(array.size()/2);
}