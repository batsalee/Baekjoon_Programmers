#include <vector>

std::vector<int> solution(int n, std::vector<int> numlist) {
    
    std::vector<int> answer;  
    for(const int& nl : numlist) {
        if(nl % n == 0) answer.push_back(nl);
    }
    
    return answer;
}