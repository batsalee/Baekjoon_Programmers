#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
    int first = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 2) {
            first = i;
            break;
        }
    }
    
    int last = -1;
    for(int i = arr.size() - 1; i >= 0; i--) {
        if(arr[i] == 2) {
            last = i;
            break;
        }
    }
    
    if(first == -1) return vector<int> {-1};
    else return vector<int> {arr.begin() + first, arr.begin() + last + 1};
}