#include <string>
using namespace std;

int solution(string s) {
    int answer = 0, index = 0;
    while(index < s.size()) {
        int same = 1, diff = 0;
        char x = s[index];
        while(same != diff) {             
            index++;
            
            if(s[index] == x) same++;
            else diff++;           
        }
        answer++;
        index++;
    }    
    
    return answer;
}