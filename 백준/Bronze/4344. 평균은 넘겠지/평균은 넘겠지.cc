#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
	int count;
	cin >> count;
	
	int student_count;
	double average;
	int above_count;
	for (int i = 0; i < count; i++)
	{
		cin >> student_count;
		vector<int> scores(student_count);
		for (int j = 0; j < student_count; j++)
		{
			cin >> scores[j];
		}
		average = accumulate(scores.begin(), scores.end(), 0.0) / student_count;
		above_count = std::count_if(scores.begin(), scores.end(), [&](int s) {return (s > average); });
		cout << fixed;
		cout.precision(3);
		cout << above_count * 100 / (double)student_count << '%' << endl;
	}

	return 0;
}