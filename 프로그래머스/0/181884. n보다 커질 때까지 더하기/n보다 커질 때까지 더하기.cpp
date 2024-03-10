#include <vector>
using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    for(int nu : numbers) {
        answer += nu;
        if(answer > n) return answer;
    }
}