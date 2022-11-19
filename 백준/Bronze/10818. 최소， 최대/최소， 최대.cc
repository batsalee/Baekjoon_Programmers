#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int size;
	cin >> size;
	
	vector<int> inputs(size);
	for (int i = 0; i < size; i++)
	{
		cin >> inputs[i];
	}	

	cout << *min_element(inputs.begin(), inputs.end()) << ' ' << *max_element(inputs.begin(), inputs.end());

	return 0;
}