#include <string>
#include <algorithm>
using namespace std;

string solution(string new_id) {
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower); // step1
    
    string answer = "";    
    for(char ni : new_id) {
        if(answer == "" && ni == '.') continue; // step 4
        
        if(islower(ni) || isdigit(ni) || ni == '-' || ni == '_' || ni == '.') {
            if(ni == '.' && answer.back() == '.') continue; // step 3
            else answer.push_back(ni); // step2
        }
    }
    
    if(answer == "") answer = "a"; // step5
    if(answer.size() >= 16) answer = answer.substr(0, 15); // step6
    if(answer.back() == '.') answer.pop_back(); // step4, step6
    if(answer.size() <= 2) answer = answer + string(3 - answer.size(), answer.back());
    
    return answer;
}