#include <string>
using namespace std;

string solution(string myString) {
    for(char& ms : myString) {
        if(ms == 'a') ms = 'A';
        else if(isupper(ms) && ms != 'A') ms = tolower(ms);
    }
    
    return myString;
}