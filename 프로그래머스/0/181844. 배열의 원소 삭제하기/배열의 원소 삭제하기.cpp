#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    for(int a : arr) {
        if(delete_list.end() == find(delete_list.begin(), delete_list.end(), a))
            answer.push_back(a);
    }   
    
    return answer;
}