#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(string my_string) {
    stringstream ss;
    ss.str(my_string);
    
    vector<string> answer;
    string part;
    while(ss >> part) {
        answer.push_back(part);
    }
    return answer;
}