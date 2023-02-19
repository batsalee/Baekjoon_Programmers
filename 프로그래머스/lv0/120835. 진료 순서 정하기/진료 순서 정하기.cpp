#include <vector>

std::vector<int> solution(std::vector<int> emergency) {
    std::vector<int> answer;
    
    for(const int& e : emergency) {
        int count = 0;
        for(int i=0; i<emergency.size(); i++) {
            if(e < emergency[i]) count++;
        }
        answer.push_back(count+1);
    }
    
    return answer;
}