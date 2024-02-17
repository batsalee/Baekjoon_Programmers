#include <algorithm>
#include <vector>

std::vector<int> solution(std::vector<int> numbers, std::string direction) {
    if(direction == "left")
        rotate(numbers.begin(), numbers.begin() + 1, numbers.end());
    else if(direction == "right")
        rotate(numbers.begin(), numbers.end() - 1 , numbers.end());

    return numbers;
}