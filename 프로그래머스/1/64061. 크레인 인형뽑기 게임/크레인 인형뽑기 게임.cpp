#include <vector>
#include <stack>
using namespace std;

int pick(vector<vector<int>>& b, int m)
{
    int result = 0;
    for(int i = 0; i < b.size(); i++) {
        if(b[i][m - 1]) {
            result = b[i][m - 1];
            b[i][m - 1] = 0;
            break;
        }
    }
    
    return result;
}
  
int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;
    int picked;
    for(int m : moves) {
        picked = pick(board, m);
        if(picked) {
            if(s.size() && (s.top() == picked)) {
                s.pop();
                answer += 2;
            }
            else s.push(picked);
        }
    }
    
    return answer;
}