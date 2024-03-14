#include <string>
using namespace std;

int solution(string num_str) {
    int answer = 0;
    for(char& ns : num_str) {
        answer += ns - '0';
    }
    return answer;
}