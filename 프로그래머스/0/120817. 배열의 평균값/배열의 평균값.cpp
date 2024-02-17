#include <vector>
#include <numeric>

double solution(std::vector<int> numbers) {
    return accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
}