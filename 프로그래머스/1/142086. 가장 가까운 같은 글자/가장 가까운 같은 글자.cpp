#include <string>
#include <vector>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer(s.size(), -1);
    for(int i = 0; i < s.size(); i++) {
        int j = i - 1;
        while(j >= 0) {
            if(s[j] == s[i]) break;
            else j--;
        }
        if(j != -1) answer[i] = i - j;
    }    
    
    return answer;
}