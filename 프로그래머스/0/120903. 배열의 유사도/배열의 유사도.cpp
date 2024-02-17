#include <string>
#include <vector>
#include <unordered_map>

int solution(std::vector<std::string> s1, std::vector<std::string> s2) {
    int answer = 0;
    std::unordered_map<std::string, bool> similarity;
    
    for(std::string _s1 : s1) {
        similarity[_s1] = true;
    }
    
    for(std::string _s2 : s2) {
        if(similarity[_s2]) answer++;
    }
    
    return answer;
}