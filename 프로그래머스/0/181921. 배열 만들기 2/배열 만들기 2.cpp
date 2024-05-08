#include <vector>
#include <regex>
using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;    
    regex re("(0|5)+");
    while(l <= r) {        
        if(regex_match(to_string(l), re)) {
            answer.push_back(l);
            l += 5;
        }
        else l++;
    }
    
    return answer.size() ? answer : vector<int> {-1};
}