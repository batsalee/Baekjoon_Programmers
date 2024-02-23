#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string t, string p) {
	vector<string> sub;
	for (int i = 0; i <= t.length() - p.length(); i++) { 
        sub.push_back(t.substr(i, p.length())); 
    }
    
    sort(sub.begin(), sub.end());
	return upper_bound(sub.begin(), sub.end(), p) - lower_bound(sub.begin(), sub.end(), p) + (lower_bound(sub.begin(), sub.end(), p) - sub.begin());
}