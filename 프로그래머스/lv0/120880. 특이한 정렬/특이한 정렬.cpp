#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> numlist, int n) {    
    sort(numlist.begin(), numlist.end(),
        [n](const auto& a, const auto& b)
        {
            if(std::abs(a - n) == std::abs(b - n)) return a > b;
            else return std::abs(a - n) < std::abs(b - n); 
        }
        );
    
    return numlist;
}