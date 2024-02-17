#include <vector>

std::vector<int> solution(int num, int total) {
    std::vector<int> answer;
    
    int offset = 
        (num % 2 == 0) ? (total / num) - (num / 2) + 1 : (total / num) - (num / 2);  
    
    for(int i=0; i<num; i++) {
        answer.push_back(offset);
        offset++;
    }
        
    return answer;
}