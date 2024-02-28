#include <string>
#include <vector>
using namespace std;

#define INF 2147483647

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> count(26, INF);
    for(auto& k : keymap) {
        for(int i = 0; i < k.size(); i++) {
            if(count[k[i] - 'A'] > i + 1) count[k[i] - 'A'] = i + 1;
        }
    }
    
    vector<int> answer;
    for(auto& tar : targets) {
        int cal = 0;
        bool flag = true;
        for(auto& t : tar) {
            if(count[t - 'A'] == INF) {
                flag = false;
                break;
            }
            else cal += count[t - 'A'];
        }
        if(flag) answer.push_back(cal);
        else answer.push_back(-1);
    }
    
    return answer;
}