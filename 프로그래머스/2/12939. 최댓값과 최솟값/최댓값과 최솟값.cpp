#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    stringstream ss;
    ss.str(s);
    
    string part;
    int num;
    vector<int> v;
    while(ss >> part) {
        num = stoi(part);
        v.push_back(num);
    }
    
    string answer = "";
    sort(v.begin(), v.end());
    answer = to_string(v.front()) + ' ' + to_string(v.back());
    
    return answer;
}