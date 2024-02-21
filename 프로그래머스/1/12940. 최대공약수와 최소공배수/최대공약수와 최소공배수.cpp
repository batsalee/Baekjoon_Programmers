#include <numeric>
#include <vector>
using namespace std;

vector<int> solution(int n, int m) {
    return vector<int> {gcd(n, m), lcm(n, m)};
}