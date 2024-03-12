#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strArr) {
    for(int i = 0; i < strArr.size(); i++) {
        i % 2 ? transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::toupper) : transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::tolower);
    }
    
    return strArr;
}