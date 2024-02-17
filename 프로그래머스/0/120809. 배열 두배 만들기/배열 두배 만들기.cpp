#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> numbers) {
    std::vector<int> answer(numbers.size());
    
    transform(numbers.begin(), numbers.end(), 
              answer.begin(), [](int i){return i*2;});
    
    return answer;
}