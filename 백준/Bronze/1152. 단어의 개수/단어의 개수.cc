#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string input;
	getline(cin, input);

	stringstream stream;
	stream.str(input);

	int word_count = 0;
	string word;
	while (stream >> word)
	{
		word_count++;
	}
	cout << word_count;
	
	return 0;
}