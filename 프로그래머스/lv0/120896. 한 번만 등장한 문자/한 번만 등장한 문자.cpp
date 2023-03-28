#include <string>
#include <map>

std::string solution(std::string s) {
    std::map<char, int> words;
    for(const char& c : s) {
        words[c]++;
    }
    
    std::string answer = "";
    for(auto& w : words) {
        if(w.second == 1) answer += w.first;
    }
    
    return answer;
}