#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> failure(N + 1, 0);
    for(int s : stages) {
        failure[s]++; 
    }
        
    vector<int> challenger(N + 1, 0);
    int sum = 0;
    for(int i = 1; i < N + 1; i++) {
        sum += failure[i - 1];
        challenger[i] = stages.size() - sum;
    }
      
    vector<pair<double, int>> vp;
    for(int i = 1; i < N + 1; i++) {
        if(challenger[i] != 0) vp.push_back({failure[i] / (double)challenger[i], i});
        else vp.push_back({0, i});
    }
        
    sort(vp.begin(), vp.end(), [](auto a, auto b){
        if(a.first == b.first) return a.second < b.second;
        else return a.first > b.first;
    });
    
    vector<int> answer;
    for(auto p : vp) {
        answer.push_back(p.second);
    }
    return answer;
}