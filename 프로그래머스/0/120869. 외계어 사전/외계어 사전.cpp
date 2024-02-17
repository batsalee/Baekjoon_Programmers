#include <string>
#include <vector>
#include <algorithm>

int solution(std::vector<std::string> spell, std::vector<std::string> dic) {
    std::string forSpell = "";    
    for(const auto& c : spell) {
        forSpell += c;
    }
    sort(forSpell.begin(), forSpell.end());
    
    for(std::string s : dic) {
        sort(s.begin(), s.end());
        if(forSpell == s) return 1;
    }
        
    return 2;
}