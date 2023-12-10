#include <bits/stdc++.h>
using namespace std;

void solve()
{	
	unordered_map<string, char> morse;
	morse[".-"] = 'A'; morse["-..."] = 'B'; morse["-.-."] = 'C'; morse["-.."] = 'D'; morse["."] = 'E';
	morse["..-."] = 'F'; morse["--."] = 'G'; morse["...."] = 'H'; morse[".."] = 'I'; morse[".---"] = 'J';
	morse["-.-"] = 'K'; morse[".-.."] = 'L'; morse["--"] = 'M'; morse["-."] = 'N'; morse["---"] = 'O';
	morse[".--."] = 'P'; morse["--.-"] = 'Q'; morse[".-."] = 'R'; morse["..."] = 'S'; morse["-"] = 'T';
	morse["..-"] = 'U'; morse["...-"] = 'V'; morse[".--"] = 'W'; morse["-..-"] = 'X'; morse["-.--"] = 'Y';
	morse["--.."] = 'Z'; morse[".----"] = '1'; morse["..---"] = '2'; morse["...--"] = '3'; morse["....-"] = '4';
	morse["....."] = '5'; morse["-...."] = '6'; morse["--..."] = '7'; morse["---.."] = '8'; morse["----."] = '9';
	morse["-----"] = '0'; morse["--..--"] = ','; morse[".-.-.-"] = '.'; morse["..--.."] = '?'; morse["---..."] = ':';
	morse["-....-"] = '-'; morse[".--.-."] = '@';
	
	int N;
	cin >> N;

	string result = "", input;
	cout << result;
	while (N--) {
		cin >> input;
		result.push_back(morse[input]);
	}
	
	cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}