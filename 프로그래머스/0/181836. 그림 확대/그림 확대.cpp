#include <string>
#include <vector>
using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(const string& p : picture) {
        string temp;
        for(const char& c : p) {
            for(int i = 0;i < k; i++) {
                temp.push_back(c);
            }
        }
        for(int i = 0; i < k; i++) {
            answer.push_back(temp);
        }
    }   
    
    return answer;
}