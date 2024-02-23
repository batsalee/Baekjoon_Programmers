#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end());
    vector<pair<char, int>> vp;
    for(int i = 0; i < strings.size(); i++) {
        vp.push_back({strings[i][n], i});
    }
    sort(vp.begin(), vp.end());
    
    vector<string> answer(strings.size());
    for(int i = 0; i < strings.size(); i++) {
        answer[i] = strings[vp[i].second];
    }
    
    return answer;
}