#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(auto& q : queries) {
        int i = q[0];
        while(i <= q[1]) {
            if(i % q[2] != 0) i++;
            else { arr[i]++; i += q[2]; }
        }
    }
    return arr;
}