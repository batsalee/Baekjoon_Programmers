#include <vector>
using namespace std;

int solution(vector<int> num_list) {
    int answer = num_list[0];
    if(num_list.size() >= 11) {
        for(int i = 1; i < num_list.size(); i++) 
            answer += num_list[i];    
    }
    else if(num_list.size() <= 10) {
        for(int i = 1; i < num_list.size(); i++) 
            answer *= num_list[i];    
    }
    
    return answer;
}