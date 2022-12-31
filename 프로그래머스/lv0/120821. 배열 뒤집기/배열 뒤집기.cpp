#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    for(auto ritr=num_list.rbegin(); ritr!=num_list.rend(); ritr++)
        answer.push_back(*ritr);
     
    return answer;
}