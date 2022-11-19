#include <iostream>
#include <vector>

using namespace std;

int main()
{	
	vector<int> students_num(30);

	for (int i = 0; i < students_num.size(); i++)
	{
		students_num[i] = i+1;
	}

	int presenter;
	for (int i = 0; i < students_num.size()-2; i++)
	{
		cin >> presenter;
		students_num[presenter - 1] = 0;
	}	

	for (int i = 0; i < students_num.size(); i++)
	{
		if (students_num[i] != 0)  cout << i + 1 << endl;
	}	

	return 0;
}