#include <string>

int solution(int num, int k) {  
    std::string n = std::to_string(num);   
    int index = n.find(std::to_string(k));
   
    if(index == std::string::npos) return -1;
    else return index + 1;
}