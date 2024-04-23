#include <vector>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for(int nl : num_list) {
        while(nl != 1) {
            if(nl & 1) nl = (nl - 1) / 2;
            else nl /= 2;
            
            answer++;
        }
    }
    
    return answer;
}