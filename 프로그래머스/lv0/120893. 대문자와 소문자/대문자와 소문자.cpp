#include <string>

std::string solution(std::string my_string) {
    std::string answer = "";
    
    for(const char& c : my_string) {
        if(isupper(c)) answer += tolower(c);
        else if(islower(c)) answer += toupper(c);
    }
    
    return answer;
}