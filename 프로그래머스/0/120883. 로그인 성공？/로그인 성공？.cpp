#include <vector>
#include <string>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    for(const auto& database : db) {
        if(database == id_pw) return "login";
        else if(database[0] == id_pw[0]) return "wrong pw";
    }
    
    return "fail";
}