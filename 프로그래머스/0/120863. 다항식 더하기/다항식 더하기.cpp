#include <string>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    stringstream stream;
    stream.str(polynomial);

    int sumX = 0, sumN = 0;;
    string part;
    while(stream >> part) {        
        if(part == "+") continue;
        else if(part == "x") sumX++;
        else if(part.find("x") != string::npos) sumX += stoi(part);
        else if(part.find("x") == string::npos) sumN += stoi(part);
    }
    
    string answer = "";
    if(sumX == 0 && sumN == 0) answer = "0";
    else if(sumX == 0 && sumN > 0) answer = to_string(sumN);
    else if(sumX == 1 && sumN == 0) answer = "x";
    else if(sumX == 1 && sumN > 0) answer = "x + " + to_string(sumN);
    else if(sumX > 1 && sumN == 0) answer = to_string(sumX) + "x";
    else if(sumX > 1 && sumN > 0) answer = to_string(sumX) + "x + " + to_string(sumN);
    
    return answer;
}