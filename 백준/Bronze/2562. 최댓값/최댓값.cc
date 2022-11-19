#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{	
	vector<int> inputs(9);
	for (int i = 0; i < 9; i++)
	{
		cin >> inputs[i];
	}	

	cout << *max_element(inputs.begin(), inputs.end());
	cout << endl;
	cout << max_element(inputs.begin(), inputs.end()) - inputs.begin() + 1;

	return 0;
}
