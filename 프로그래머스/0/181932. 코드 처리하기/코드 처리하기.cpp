#include <string>
using namespace std;

string solution(string code) {
    string ret = "";
    int mode = 0;
    for(int idx = 0 ; idx < code.size(); idx++) {
        if(code[idx] == '1') mode ^= 1;
        else if(!(idx % 2) && !mode) ret.push_back(code[idx]);
        else if((idx % 2) && mode) ret.push_back(code[idx]);
    }
    
    return ret.size() ? ret : "EMPTY";
}