#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int GetIndex(string s)
{
    if(s == "code") return 0;
    else if(s == "date") return 1;
    else if(s == "maximum") return 2;
    else if(s == "remain") return 3;
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {  
    vector<vector<int>> answer;
    for(vector<int> d : data) {
        if(d[GetIndex(ext)] < val_ext) answer.push_back(d);
    }
    
    sort(answer.begin(), answer.end(), 
        [&](auto a, auto b) { 
            return a[GetIndex(sort_by)] < b[GetIndex(sort_by)];     
        });
    
    return answer;
}