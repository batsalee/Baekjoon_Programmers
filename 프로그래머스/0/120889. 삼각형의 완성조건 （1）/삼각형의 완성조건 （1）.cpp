#include <vector>

int solution(std::vector<int> sides) {
    int biggest = std::max(std::max(sides[0], sides[1]), sides[2]);
    
    return ( (sides[0] + sides[1] + sides[2]) - biggest > biggest) ? 1 : 2;
}