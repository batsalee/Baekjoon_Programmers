#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    unordered_map<string, unordered_set<string>> report_details;
    for(string& r : report) {
        stringstream ss;
        ss.str(r);
        string from, to;
        ss >> from >> to;
        
        report_details[to].insert(from);        
    }
    
    unordered_map<string, int> count;
    for(auto rd : report_details) {
        auto ri = rd.second;
        if(ri.size() >= k) {
            for(string s : ri) {
                count[s]++;
            }
        }
    }
         
    vector<int> answer;
    for(string& il : id_list) {
        answer.push_back(count[il]);
    }
    return answer;
}