#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> strArr) {
    vector<int> len(31, 0);
    for(string& sa : strArr) {
        len[sa.size()]++;
    }
    
    return *max_element(len.begin(), len.end());
}