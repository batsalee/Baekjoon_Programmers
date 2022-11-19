#include <vector>
#include <numeric>

long long sum(std::vector<int> &a) {
    return accumulate(a.begin(), a.end(), 0LL);
}
