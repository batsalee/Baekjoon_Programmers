#include <string>
using namespace std;

int solution(string number) {
    int answer = 0;
    for(char n : number) {
        answer += (n - '0');
    }
    
    return answer % 9;
}