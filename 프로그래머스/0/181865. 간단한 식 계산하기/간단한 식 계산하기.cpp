#include <string>
#include <sstream>
using namespace std;

int solution(string binomial) {
    stringstream ss;
    ss.str(binomial);
    
    string a, op, b;
    ss >> a >> op >> b;

    if(op == "+") return stoi(a) + stoi(b);
    else if(op == "-") return stoi(a) - stoi(b);
    else if(op == "*") return stoi(a) * stoi(b);
}