#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
    arr.erase(min_element(arr.begin(), arr.end()));
    
    if(arr.empty()) return vector<int> {-1};
    else return arr;
}