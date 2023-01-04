#include <vector>

std::vector<int> solution(int money) {
    const unsigned int price_ice_americano = 5500;    
    std::vector<int> answer;
    
    answer.push_back(money/price_ice_americano);
    answer.push_back(money%price_ice_americano);
    
    return answer;
}