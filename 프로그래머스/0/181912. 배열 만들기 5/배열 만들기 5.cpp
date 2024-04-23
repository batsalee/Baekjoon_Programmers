#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    int part;
    for(const string& is : intStrs) {
        part = stoi(is.substr(s, l));
        if(k < part) answer.push_back(part);
    }
    
    return answer;
}