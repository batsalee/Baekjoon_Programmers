#include <string>
using namespace std;

string solution(string my_string, string alp) {
    for(char& ms : my_string) {
        if(ms == alp[0]) ms -= 32;
    }
    return my_string;
}