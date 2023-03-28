#include <vector>

int solution(std::vector<int> array, int height) {
    int answer = 0;    
    for(const auto& a : array)
        answer += (a > height);
        
    return answer;
}