#include <string>
using namespace std;

bool solution(string s)
{        
    int now = 0;       
    for(auto ritr = s.rbegin(); ritr != s.rend(); ritr++) {
        if(*ritr == '(') now -= 1;
        else if(*ritr == ')') now += 1;
        
        if(now < 0) break;
    }
    if(now == 0) return true;
    else return false;
}