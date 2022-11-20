#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> croatia_alphabet = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	
	string input;
	cin >> input;

	size_t index;
	for (int i = 0; i < croatia_alphabet.size(); i++)
	{
		index = input.find(croatia_alphabet[i]);
		while(index != string::npos)
		{	
			input.replace(index, croatia_alphabet[i].length(), "0");
			index = input.find(croatia_alphabet[i]);
		}
	}

	cout << input.length();

	return 0;
}