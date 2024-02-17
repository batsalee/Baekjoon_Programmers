#include <vector>

std::vector<int> solution(std::vector<int> num_list) {
    std::vector<int> answer(2, 0);
    for(const auto& nl : num_list) {
        (nl % 2) ? answer[1]++ : answer[0]++;
    }
    
    return answer;
}