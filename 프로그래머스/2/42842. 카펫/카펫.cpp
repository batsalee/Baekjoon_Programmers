#include <cmath>
#include <vector>
using namespace std;

vector<int> solution(int brown, int yellow) {
    for(int x = yellow; x >= sqrt(yellow); x--) {
        int y = yellow / x;
        if(x * y != yellow) continue;        
        if(2 * x + 2 * y + 4 == brown) return vector<int>{x + 2, y + 2};
    }
}