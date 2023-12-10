#include <bits/stdc++.h>
using namespace std;

void solve()
{
	/*
	unordered_map<string, char> morse;
	morse[".-"] = 'A'; morse["-..."] = 'B'; morse["-.-."] = 'C'; morse["-.."] = 'D'; morse["."] = 'E';
	morse["..-."] = 'F'; morse["--."] = 'G'; morse["...."] = 'H'; morse[".."] = 'I'; morse[".---"] = 'J';
	morse["-.-"] = 'K'; morse[".-.."] = 'L'; morse["--"] = 'M'; morse["-."] = 'N'; morse["---"] = 'O';
	morse[".--."] = 'P'; morse["--.-"] = 'Q'; morse[".-."] = 'R'; morse["..."] = 'S'; morse["-"] = 'T';
	morse["..-"] = 'U'; morse["...-"] = 'V'; morse[".--	"] = 'W'; morse["-..-"] = 'X'; morse["-.--"] = 'Y';
	morse["--.."] = 'Z'; morse[".----"] = '1'; morse["..---"] = '2'; morse["...--"] = '3'; morse["....-"] = '4';
	morse["....."] = '5'; morse["-...."] = '6'; morse["--..."] = '7'; morse["---.."] = '8'; morse["----."] = '9';
	morse["-----"] = '0'; morse["--..--"] = ','; morse[".-.-.-"] = '.'; morse["..--.."] = '?'; morse["---..."] = ':';
	morse["-....-"] = '-'; morse[".--.-."] = '@';*/
	map<string, char> m;
	m.insert({ ".-",	'A' });
	m.insert({ "-...",	'B' });
	m.insert({ "-.-.",	'C' });
	m.insert({ "-..",	'D' });
	m.insert({ ".",		'E' });
	m.insert({ "..-.",	'F' });
	m.insert({ "--.",	'G' });
	m.insert({ "....",	'H' });
	m.insert({ "..",	'I' });
	m.insert({ ".---",	'J' });
	m.insert({ "-.-",	'K' });
	m.insert({ ".-..",	'L' });
	m.insert({ "--",	'M' });
	m.insert({ "-.",	'N' });
	m.insert({ "---",	'O' });
	m.insert({ ".--.",	'P' });
	m.insert({ "--.-",	'Q' });
	m.insert({ ".-.",	'R' });
	m.insert({ "...",	'S' });
	m.insert({ "-",		'T' });
	m.insert({ "..-",	'U' });
	m.insert({ "...-",	'V' });
	m.insert({ ".--",	'W' });
	m.insert({ "-..-",	'X' });
	m.insert({ "-.--",	'Y' });
	m.insert({ "--..",	'Z' });
	m.insert({ ".----",	'1' });
	m.insert({ "..---",	'2' });
	m.insert({ "...--",	'3' });
	m.insert({ "....-",	'4' });
	m.insert({ ".....",	'5' });
	m.insert({ "-....",	'6' });
	m.insert({ "--...",	'7' });
	m.insert({ "---..",	'8' });
	m.insert({ "----.",	'9' });
	m.insert({ "-----",	'0' });
	m.insert({ "--..--",',' });
	m.insert({ ".-.-.-",'.' });
	m.insert({ "..--..",'?' });
	m.insert({ "---...",':' });
	m.insert({ "-....-",'-' });
	m.insert({ ".--.-.",'@' });

	int N;
	cin >> N;

	string result = "", input;
	cout << result;
	while (N--) {
		cin >> input;
		result.push_back(m[input]);
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