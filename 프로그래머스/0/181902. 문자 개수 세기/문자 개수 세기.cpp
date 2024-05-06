#include <string>
#include <vector>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    for(char& ms : my_string) {
        isupper(ms) ? answer[ms - 'A']++ : answer[ms - 'a' + 26]++;
    }
    return answer;
}