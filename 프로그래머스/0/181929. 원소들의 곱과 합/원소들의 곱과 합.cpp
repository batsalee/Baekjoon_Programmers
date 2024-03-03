#include <vector>
#include <numeric>
#include <cmath>
using namespace std;

int solution(vector<int> num_list) {
    return pow(accumulate(num_list.begin(), num_list.end(), 0), 2) 
        > accumulate(num_list.begin(), num_list.end(), 1, multiplies<int>());
}