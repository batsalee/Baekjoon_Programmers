#include <string>
#include <vector>

std::string solution(std::string cipher, int code) {
    std::string answer = "";
    
    for(int i = code; i <= cipher.length(); i += code) {
        answer += cipher[i-1];
    }
    
    return answer;
}