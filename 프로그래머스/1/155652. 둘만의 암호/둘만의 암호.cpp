#include <string>
using namespace std;

string solution(string s, string skip, int index) {
    int i;
    for(char& c : s) {
        i = 0;
        while(i < index) {
            c++;
            if(c > 'z') c -= 26;
            if(skip.find(c) == string::npos) i++;            
        }        
    }
    
    return s;
}