#include <algorithm>
#include <vector>

std::vector<int> solution(std::vector<int> array) {
    std::vector<int> answer;
        
    auto itr = max_element(array.begin(), array.end()); 
    
    answer.push_back(*itr);
    answer.push_back(itr-array.begin());
    
    return answer;
}