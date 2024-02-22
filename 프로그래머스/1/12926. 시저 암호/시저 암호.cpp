#include <string>
using namespace std;

string solution(string s, int n) {
	for (int i = 0; i < s.size(); i++) {		
		if (isupper(s[i])) s[i] = (s[i] + n > 'Z') ? s[i] + n - 26 : s[i] + n;		
		else if (islower(s[i])) s[i] = (s[i] + n > 'z') ? s[i] + n - 26 : s[i] + n;
	}
	
	return s;
}