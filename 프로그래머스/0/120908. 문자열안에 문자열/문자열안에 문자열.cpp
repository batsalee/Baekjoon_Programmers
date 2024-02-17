#include <string>

int solution(std::string str1, std::string str2) {
    return (str1.find(str2) != std::string::npos) ? 1 : 2;
}