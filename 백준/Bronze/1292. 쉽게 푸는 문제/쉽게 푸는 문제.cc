#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;
	
	int A, B;
	cin >> A >> B;

	vector<int> ps(B + 1, 0);
	int index = 1, value = 1, count = 0;
	while (index <= B) {
		ps[index] = value + ps[index - 1];
		index++;
		count++;

		if (count == value) {
			value++;
			count = 0;
		}
	}

	cout << ps[B] - ps[A - 1];

	return 0;
}