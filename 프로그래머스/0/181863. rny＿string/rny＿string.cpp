#include <string>
using namespace std;

string solution(string rny_string) {
    string answer = "";
    for(const char& rs : rny_string) {
        if(rs == 'm') answer += "rn";
        else answer += rs;
    }
    return answer;
}