#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<int> indices) {
    sort(indices.begin(), indices.end());
    
    string answer = "";
    int index = 0;
    for(int i = 0; i < my_string.size(); i++) {
        if(i == indices[index]) index++;
        else answer.push_back(my_string[i]);
    }
    
    return answer;
}