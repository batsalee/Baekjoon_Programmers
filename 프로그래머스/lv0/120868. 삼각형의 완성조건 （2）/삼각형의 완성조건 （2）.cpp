#include <vector>
#include <set>

int solution(std::vector<int> sides) {
    int answer = 0;
    
    std::set<int> s;
    int longer = std::max(sides[0], sides[1]);
    int shorter = std::min(sides[0], sides[1]);
    
    // sides의 두 숫자가 짧은 2개인 경우
    for(int i = longer; i < sides[0]+sides[1]; i++) {
        s.insert(i);    
    }
    
    // sides의 숫자 중 하나가 젤 긴 경우
    for(int i = 1; i <= longer; i++) {
        if(i + shorter > longer) s.insert(i);
    }    
    answer = s.size();
    
    return answer;
}