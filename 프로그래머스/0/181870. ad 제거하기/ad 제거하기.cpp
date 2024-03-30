#include <string>
#include <vector>
using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(const string& sa : strArr) {
        if(sa.find("ad") == string::npos) answer.push_back(sa);
    }
    
    return answer;
}