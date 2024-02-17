#include <vector>

std::vector<int> solution(int n) {
    std::vector<int> answer;    
    for(int i = 1; i <= n; i += 2) {
        answer.push_back(i);
    }
    
    return answer;
}