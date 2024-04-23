#include <cmath>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
    int less = pow(2, ceil(log2(arr.size()))) - arr.size();
    while(less--) {
        arr.push_back(0);
    }

    return arr;
}