#include <string>
#include <sstream>

using namespace std;

int solution(string my_string) {    
    for(int i = 0; i < my_string.length(); i++) {
        if( isalpha(my_string[i]) ) my_string[i] = ' ';
    }
    
    stringstream stream;
    stream.str(my_string);
    
    string num="";
    int answer = 0;
    while(stream >> num) {
        answer += stoi(num);
    }
        
    return answer;
}