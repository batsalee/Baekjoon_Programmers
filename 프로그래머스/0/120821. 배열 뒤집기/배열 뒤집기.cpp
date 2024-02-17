#include <vector>

std::vector<int> solution(std::vector<int> num_list) {
    std::vector<int> answer;
    
    for(auto ritr = num_list.rbegin(); ritr != num_list.rend(); ritr++)
        answer.push_back(*ritr);
     
    return answer;
}