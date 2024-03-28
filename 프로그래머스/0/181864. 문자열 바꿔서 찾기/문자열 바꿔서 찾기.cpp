#include <string>
using namespace std;

int solution(string myString, string pat) {
    for(char& ms : myString) {
        if(ms == 'A') ms = 'B';
        else if(ms == 'B') ms = 'A';
    }
    
    return myString.find(pat) != string::npos;
}