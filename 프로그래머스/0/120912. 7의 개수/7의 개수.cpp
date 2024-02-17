#include <vector>

int solution(std::vector<int> array) {
    int answer = 0;    
    for(int a : array) {        
        while(a) {
            if(a % 10 == 7) answer++;
            a /= 10;
        }
    }  
    
    return answer;
}