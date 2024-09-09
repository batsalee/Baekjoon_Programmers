#include <bits/stdc++.h>
using namespace std;

vector<int> func(vector<int> v)
{
	vector<int> temp;
	for (int i = 1; i < v.size(); i++) {
		temp.push_back(v[i] - v[i - 1]);
	}

	return temp;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	string input;
	cin >> input;

	vector<int> arr;
	stringstream ss;
	ss.str(input);
	string temp;
	while (getline(ss, temp, ',')) {
		arr.push_back(stoi(temp));
	}

	while (K--) {
		arr = func(arr);
	}

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i];
		if (i != arr.size() - 1) cout << ',';
	}

	return 0;
}