#include <string>

int solution(std::string my_string) {
    int answer = 0;
    
    for(const char& c : my_string) {
        if(isdigit(c)) answer += (c-'0');
    }
    
    return answer;
}