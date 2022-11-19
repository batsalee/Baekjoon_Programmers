#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int count;
	cin >> count;
	
	vector<double> grades(count);
	for (int i = 0; i < count; i++)
	{
		cin >> grades[i];
	}

	double max = *max_element(grades.begin(), grades.end());

	for (int i = 0; i < count; i++)
	{
		grades[i] = grades[i] / max * 100;
	}

	cout << accumulate(grades.begin(), grades.end(), 0.0) / count;

	return 0;
}