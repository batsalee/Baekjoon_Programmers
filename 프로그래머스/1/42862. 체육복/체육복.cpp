#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> clothes(n + 1, 1);
    clothes[0] = 0;
    for(int l : lost) { clothes[l]--; }
    for(int r : reserve) { clothes[r]++; }
    
    for(int i = 1; i < n + 1; i++) {
        if(clothes[i] == 0) {
            if(clothes[i - 1] == 2) {
                clothes[i - 1]--;
                clothes[i]++;
            }
            else if(clothes[i + 1] == 2) {
                clothes[i + 1]--;
                clothes[i]++;
            }
        }
    }

    return n - count(clothes.begin() + 1, clothes.end(), 0);
}