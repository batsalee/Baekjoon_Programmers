#include <vector>
using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    vector<int> temp;    
    while(true) {
        temp = arr;
        
        for(int& t : temp) {
            if(t >= 50 && t % 2 == 0) t /= 2;
            else if(t < 50 && t % 2 == 1) t = 2 * t + 1;
        }
        
        if(temp == arr) return answer;
        else {
            answer++;
            arr = temp;
        }
    }   
}