#include <string>

std::string solution(std::string my_string) {
    std::string answer = "";
    
    for(const char& c : my_string) {
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            answer += c;            
    }
    
    return answer;
}