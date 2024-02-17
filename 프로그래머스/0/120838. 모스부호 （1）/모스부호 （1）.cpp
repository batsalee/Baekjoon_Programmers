#include <string>
#include <vector>
#include <sstream>

std::string solution(std::string letter) {
    std::vector<std::string> morse = {
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",
        ".---","-.-",".-..","--","-.","---",".--.","--.-",
        ".-.","...","-","..-","...-",".--","-..-","-.--","--.."
    };
    
    std::string answer = "";
    std::string alpha = "";
    
    std::stringstream stream;    
    stream.str(letter);
        
    while(stream >> alpha) {
        for(int i = 0; i < morse.size(); i++) {
            if(alpha == morse[i]) {
                answer += 'a'+i;
                break;
            }
        }
    }
    
    return answer;
}