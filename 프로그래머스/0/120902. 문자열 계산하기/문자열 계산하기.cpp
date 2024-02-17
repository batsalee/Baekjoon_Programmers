#include <string>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    stringstream stream;
    stream.str(my_string);
    
    string part = "";
    int flag = 0;
    while(stream >> part) {
        if(isdigit(*part.c_str())) {
            if(flag == 0) answer += stoi(part);
            else if(flag == 1) answer -= stoi(part);
        }
        else if(part == "+") flag = 0;
        else if(part == "-") flag = 1;        
    }
    
    return answer;
}