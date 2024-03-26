#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    transform(arr.begin(), arr.end(), arr.begin(), 
              [&](int a){ return (k & 1) ? k * a : k+ a; }
             );
    
    return arr;
}