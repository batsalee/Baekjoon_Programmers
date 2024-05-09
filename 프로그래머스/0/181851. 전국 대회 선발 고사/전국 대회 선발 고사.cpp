#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<int> att;
    int r = 1;
    while(att.size() < 3) {
        int index = find(rank.begin(), rank.end(), r) - rank.begin();
        
        if(attendance[index]) att.push_back(index);
        r++;
    }
    
    return 10000 * att[0] + 100 * att[1] + att[2];
}