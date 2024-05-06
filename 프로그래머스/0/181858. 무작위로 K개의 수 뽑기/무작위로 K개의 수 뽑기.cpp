#include <vector>
#include <unordered_set>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    unordered_set<int> us;
    
    for(int a : arr) {
        if(us.find(a) == us.end()) {
            answer.push_back(a);
            us.insert(a);
        }
        
        if(answer.size() == k) break;
    }
    
    int count = k - answer.size();
    for(int i = 0; i < count; i++) {
        answer.push_back(-1);
    }
    
    return answer;
}