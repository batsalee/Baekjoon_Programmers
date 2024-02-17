#include <vector>

std::vector<int> solution(std::vector<std::vector<int>> score) {
    std::vector<double> average;
    for(const auto& s : score) {
        average.push_back( (s[0] + s[1]) / 2.0 );
    }
    
    int grade;
    std::vector<int> answer;
    for(double a : average) {
        grade = 1;
        for(double all : average) {
            if(a < all) grade++;
        }
        answer.push_back(grade);
    }
    
    return answer;
}