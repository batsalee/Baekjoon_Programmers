#include <string>
#include <vector>
using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string temp = "";
    for(char& ms : myStr) {
        if(ms == 'a' || ms == 'b' || ms == 'c') {
            if(temp != "") answer.push_back(temp);
            temp = "";
        }
        else temp.push_back(ms);
    }
    
    if(temp != "") answer.push_back(temp);    
    return answer.size() ? answer : vector<string>{"EMPTY"};
}