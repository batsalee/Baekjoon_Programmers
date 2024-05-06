#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    if(arr[0].size() > arr.size()) {
        int count = arr[0].size() - arr.size();
        vector<int> temp(arr[0].size(), 0);
        for(int i = 0; i < count; i++) {
            arr.push_back(temp);
        }
    }
    else {
        int count = arr.size() - arr[0].size();
        for(int i = 0; i < arr.size(); i++) {
            for(int j = 0; j < count; j++) {
                arr[i].push_back(0);
            }
        }
    }
    
    return arr;
}