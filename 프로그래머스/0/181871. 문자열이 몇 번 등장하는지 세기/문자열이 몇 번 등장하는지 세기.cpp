#include <string>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i = 0; i < myString.size(); i++) {
        if(pat == myString.substr(i, pat.size())) answer++;
    }
    return answer;
}