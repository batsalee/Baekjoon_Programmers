#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> solution(string s) {
    unordered_map<int, int> um;    
    string num = "";
    for(char c : s) {
        if(isdigit(c)) num.push_back(c);
        else if(!isdigit(c) && !num.empty()) {
            um[stoi(num)] ++;
            num = "";
        }        
    }
    
    vector<pair<int, int>> v;
    for(auto p : um) {
        v.push_back({p.second, p.first});
    }
    sort(v.begin(), v.end(), greater<>());
    
    vector<int> answer;
    for(auto p : v) {
        answer.push_back(p.second);
    }
    
    return answer;
}