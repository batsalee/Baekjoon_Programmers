#include <vector>
using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n, 0));
    int num = 1, x = 0, y = 0, dx = 0, dy = 1;
    while(num <= n * n) {
        answer[x][y] = num;
        
        if((dx == 0 && dy == 1) && (y + dy >= n || answer[x + dx][y + dy])) {
            dx = 1; dy = 0;
        }
        else if((dx == 1 && dy == 0) && (x + dx >= n || answer[x + dx][y + dy])) {
            dx = 0; dy = -1;
        }
        else if((dx == 0 && dy == -1) && (y + dy < 0 || answer[x + dx][y + dy])) {
            dx = -1; dy = 0;
        }
        else if((dx == -1 && dy == 0) && (x + dx < 0 || answer[x + dx][y + dy])) {
            dx = 0; dy = 1;
        }
        
        x += dx; y += dy; num++;
    }
    
    return answer;
}