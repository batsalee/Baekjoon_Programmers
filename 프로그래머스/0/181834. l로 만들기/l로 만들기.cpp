#include <string>
using namespace std;

string solution(string myString) {
    for(char& ms : myString) {
        if(ms < 'l') ms = 'l';
    }
    return myString;
}