#include <map>
#include <vector>

int solution(std::vector<std::vector<int>> lines) {
    std::map<int, int> line;
    
    for(int j = 0; j < lines.size(); j++) {
        for(int i = lines[j][0]; i < lines[j][1]; i++) {
            line[i]++;
        }
    }
    
    int answer = 0;
    for(auto m : line) {
        if(m.second > 1) answer++;
    }
    
    return answer;
}