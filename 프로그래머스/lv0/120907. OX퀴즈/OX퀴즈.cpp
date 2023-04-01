#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;

    for(string q : quiz) {
        stringstream stream;
        stream.str(q);

        string part = "";
        int flag = 0;
        int result = 0;
        while(stream >> part) {
            if(part == "+") flag = 0;
            else if(part == "-") flag = 1; 
            else if(part == "=") flag = 2;
            else {
                if(flag == 0) result += stoi(part);
                else if(flag == 1) result -= stoi(part);
                else if(flag == 2) 
                    answer.push_back( (result == stoi(part.c_str())) ? "O" : "X");
            }
        }
    }
    return answer;
}