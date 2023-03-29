#include <numeric>

int solution(int a, int b) {
    int GCD = std::gcd(a, b);
    b /= GCD;
    
    // b의 소인수가 2나 5만 있으면 1, 다른게 있으면 2
    while(b % 2==0) { b /= 2; }
    while(b % 5==0) { b /= 5; }
    
    return (b == 1) ? 1 : 2;
}