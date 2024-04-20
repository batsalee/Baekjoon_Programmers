#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    stringstream ss;
    ss.str(myString);
    string part;
    while(getline(ss, part, 'x')) {
        if(part != "") answer.push_back(part);
    }    
    
    sort(answer.begin(), answer.end());
    return answer;
}