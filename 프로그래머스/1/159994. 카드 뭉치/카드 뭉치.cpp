#include <string>
#include <vector>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int index1 = 0, index2 = 0;
    for(string& g : goal) {
        if(g == cards1[index1]) index1++;
        else if(g == cards2[index2]) index2++;
        else return "No";
    }
    
    return "Yes";
}