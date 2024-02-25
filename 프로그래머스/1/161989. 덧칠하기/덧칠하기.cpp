#include <vector>
using namespace std;

int solution(int n, int m, vector<int> section) {
    vector<bool> wall(n + 1, false);
    for(int s : section) { wall[s] = true; }
        
    int answer = 0;
    for(int i = 0; i < wall.size(); i++) {
        if(wall[i]) {
            for(int j = i; j < i + m && j < wall.size(); j++) {
                wall[j] = 0;
            }
            answer++;
        }
    }
    
    return answer;
}