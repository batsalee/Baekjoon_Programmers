#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int size;
	cin >> size;

	vector<int> input(size);	
	for (int i = 0; i < size; i++)
	{
		cin >> input[i];
	}

	int search;
	cin >> search;

	cout << count(input.begin(), input.end(), search);

	return 0;
}