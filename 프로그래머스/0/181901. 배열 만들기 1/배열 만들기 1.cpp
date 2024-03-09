#include <vector>
using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    int temp = k;
    while(true) {
        answer.push_back(temp);
        temp += k;
        if(temp > n) return answer;
    }   
}