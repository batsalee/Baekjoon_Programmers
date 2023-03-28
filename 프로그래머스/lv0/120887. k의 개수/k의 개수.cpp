#include <string>

int solution(int i, int j, int k) {
    int answer = 0;
    
    std::string s = "";
    for(int num = i; num <= j; num++) {
        s = std::to_string(num);
        for(const char& c : s) {
            if(c - '0' == k) answer++;
        }
    }
    
    return answer;
}