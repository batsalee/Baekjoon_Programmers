#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int a, int b, int c, int d) {
    int dice[7] = {0, };    
    dice[a]++; dice[b]++; dice[c]++; dice[d]++;
    
    vector<pair<int, int>> v;
    for(int i = 0; i < 7; i++) {
        if(dice[i]) v.push_back({dice[i], i});
    }
    
    sort(v.begin(), v.end(), [=](auto q, auto w){
        if(q.first > w.first) return q > w;
        else return q.second < w.second;        
    });
    
    if(v[0].first == 4) return 1111 * v[0].second;
    else if(v[0].first == 3) return pow(10 * v[0].second + v[1].second, 2);
    else if(v[0].first == 2 && v[1].first == 2) 
        return (v[0].second + v[1].second) * abs(v[0].second - v[1].second);
    else if(v[0].first == 2 && v[1].first == 1)
        return v[1].second * v[2].second;
    else return v[0].second;
}