#include <string>

std::string solution(std::string rsp) {
    std::string answer = "";
    
    for(const char& c : rsp)
    {
        if(c == '0') answer += '5';
        else if(c == '2') answer += '0';
        else if(c == '5') answer += '2';        
    }
    
    return answer;
}