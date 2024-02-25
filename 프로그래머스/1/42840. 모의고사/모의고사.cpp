#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    const vector<vector<int>> submit{
        {1, 2, 3, 4, 5},
        {2, 1, 2, 3, 2, 4, 2, 5},
        {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}
    };
    
    int scores[3];
    for(int i = 0; i < 3; i++) {
        int score = 0;
        for(int j = 0; j < answers.size(); j++) {
            if(answers[j] == submit[i][j % submit[i].size()]) score += 1;
        }
        scores[i] = score;
    }
    
    int max_score = *max_element(scores, scores + 3);
    vector<int> answer;
    if(scores[0] == max_score) answer.push_back(1);
    if(scores[1] == max_score) answer.push_back(2);
    if(scores[2] == max_score) answer.push_back(3);
    return answer;
}