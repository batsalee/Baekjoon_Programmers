#include <string>
#include <vector>
#include <set>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    set<string> s;
    s.insert(words[0]);
    string before = words[0];

    int num = 1, turn = 1;
    for (int i = 1; i < words.size(); i++) {
        num++;
        if (num > n) {
            turn++;
            num = 1;
        }

        if (s.find(words[i]) != s.end() || before.back() != words[i].front()) 
            return vector<int>{num, turn};
        else {
            before = words[i];
            s.insert(words[i]);
        }
    }
    
    if(before == words.back()) return vector<int>{0, 0};
}