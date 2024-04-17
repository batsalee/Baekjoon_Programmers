#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> d, int budget) {
    sort(d.begin(), d.end());
    
    int answer = 0;
    for(int b : d) {
        if(b <= budget) {
            answer++;
            budget -= b;
        }
        else return answer;
    }
}