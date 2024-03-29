#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer, temp;
    for(int i = 0; i < commands.size(); i++) {
        temp.assign(array.begin() + commands[i][0] - 1, 
                    array.begin() + commands[i][1]);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2] - 1]);
    }
    
    return answer;
}