#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int count;
	cin >> count;

	vector<int> nums(count*2);

	for (int i = 0; i < count*2; i++)
	{
		cin >> nums[i];
	}

	for (int i = 0; i < count*2; i+=2)
	{
		cout << nums[0+i] + nums[1+i] << endl;
	}

	return 0;
}