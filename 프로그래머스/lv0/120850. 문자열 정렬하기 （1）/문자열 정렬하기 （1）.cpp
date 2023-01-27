#include <string>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::string my_string) {
    std::vector<int> answer;
    
    for(const char& c : my_string) {
        if(isdigit(c)) answer.push_back(c-'0');
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}