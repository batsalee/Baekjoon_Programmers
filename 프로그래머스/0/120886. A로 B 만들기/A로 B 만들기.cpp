#include <string>
#include <algorithm>

int solution(std::string before, std::string after) { 
    sort(before.begin(), before.end());
    sort(after.begin(), after.end());
    
    return (before == after);
}