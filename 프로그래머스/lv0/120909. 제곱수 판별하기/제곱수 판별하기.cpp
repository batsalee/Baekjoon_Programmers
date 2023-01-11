#include <cmath>

int solution(int n) {
    double SQRT = sqrt(n);
    
    return (SQRT == (int)SQRT) ? 1 : 2;
}