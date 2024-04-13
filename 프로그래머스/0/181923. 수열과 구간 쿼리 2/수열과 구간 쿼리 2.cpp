#include <vector>
using namespace std;

#define INF 1000001

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(auto q : queries) {
        int proper = INF;
        for(int i = q[0]; i <= q[1]; i++) {
            if(arr[i] > q[2]) proper = min(proper, arr[i]);
        }
        if(proper == INF) proper = -1;
        answer.push_back(proper);
    }
    return answer;
}