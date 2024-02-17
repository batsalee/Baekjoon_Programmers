#include <string>
#include <algorithm>

int solution(std::string A, std::string B) {
    if(A == B) return 0;
    
    for(int i = 1; i < A.length(); i++) {
        rotate(A.begin(), A.end() - 1 , A.end());
        if(A == B) return i;
    }
    
    return -1;
}