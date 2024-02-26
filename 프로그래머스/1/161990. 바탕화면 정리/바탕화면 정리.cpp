#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int lux = 50, luy = 50, rdx = 0, rdy = 0;
    for(int i = 0; i < wallpaper.size(); i++) {
        for(int j = 0; j < wallpaper[0].size(); j++) {
            if(wallpaper[i][j] == '#') {
                if(i < lux) lux = i;
                if(i > rdx) rdx = i;
                if(j < luy) luy = j;
                if(j > rdy) rdy = j;
            }
        }
    }
    
    return vector<int>{lux, luy, rdx + 1, rdy + 1};
}