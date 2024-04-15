#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> p2r;
    unordered_map<int, string> r2p;    
    for(int i = 0; i < players.size(); i++) {
        p2r[players[i]] = i; 
        r2p[i] = players[i];
    }
    
    for(string& c : callings) {
        int c_rank = p2r[c]; string c_name = c;
        int prev_rank = p2r[c] - 1; string prev_name = r2p[prev_rank];
        
        p2r[c_name]--;
        p2r[prev_name]++;
        r2p[c_rank] = prev_name;
        r2p[prev_rank] = c_name;
    }    
    
    vector<string> answer(players.size());
    for(int i = 0; i < players.size(); i++) {
        answer[i] = r2p[i];
    }
    return answer;
}