#include <iostream>
using namespace std;

int main(void) {
    string str; cin >> str;
    for(char& s : str) { cout << char(s ^ 32); }
    
    return 0;
}