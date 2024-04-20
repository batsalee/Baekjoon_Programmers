#include <vector>
using namespace std;

int solution(vector<int> num_list, int n) {
    for(int nl : num_list) {
        if(nl == n) return 1;
    }
    return 0;
}