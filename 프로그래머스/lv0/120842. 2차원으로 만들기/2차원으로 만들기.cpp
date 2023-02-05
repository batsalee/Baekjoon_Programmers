#include <vector>

std::vector<std::vector<int>> solution(std::vector<int> num_list, int n) {
    std::vector<std::vector<int>> answer;  
    std::vector<int> line;
    
    for(int i = 0; i < num_list.size() / n; i++) {        
        for(int j = 0; j < n; j++) {
            line.push_back(num_list[(n * i) + j]);
        }
        answer.push_back(line);
        line.clear();
    }
    return answer;
}