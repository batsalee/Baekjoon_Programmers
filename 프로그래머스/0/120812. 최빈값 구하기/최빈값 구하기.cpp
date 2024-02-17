#include <vector>
#include <map>
#include <algorithm>

int solution(std::vector<int> array) {
    std::map<int, int> count;
    
    // 각 수의 빈도 카운트
    for(const int& a : array) { count[a] += 1; }
           
    // 최빈값 찾기
    auto mode = max_element(count.begin(), count.end(), 
                [](const auto &x, const auto &y) {return x.second < y.second;});

    // 최빈값이 여러개인지 체크
    for(const auto& m : count) {
        if( (m.first != mode->first) && (m.second == mode->second) ) return -1;
    }   
    
    return mode->first;
}