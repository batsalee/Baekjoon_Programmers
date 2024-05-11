#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    unordered_map<char, int> um;
    for(const string& t : terms) { um[t[0]] = stoi(t.substr(2)); }

    vector<int> answer;        
    for(int i = 0; i < privacies.size(); i++) { 
        int year = stoi(privacies[i].substr(0, 4));
        int month = stoi(privacies[i].substr(5, 2));
        string day = privacies[i].substr(8, 2);

        month += um[privacies[i].back()];
        while(month > 12) { month -= 12; year += 1; }
                    
        string deadline = to_string(year) + '.';
        if(month < 10) deadline += '0';
        deadline += to_string(month) + '.' + day;
        
        if(today >= deadline) answer.push_back(i + 1);
    }
    
    return answer;
}