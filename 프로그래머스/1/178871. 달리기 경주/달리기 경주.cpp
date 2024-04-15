#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> rank;
    for(int i = 0; i < players.size(); i++) { rank[players[i]] = i; }
    
    for(string& c : callings) {
        int c_rank = rank[c], prev_rank = rank[c] - 1;
        rank[c]--; rank[players[prev_rank]]++;
        swap(players[c_rank], players[prev_rank]);
    }
    
    return players;
}