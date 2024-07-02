#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) { 
        cin >> arr[i]; 
    }

    vector<int> vec;
    vec.push_back(-1);
	int length_of_lis = 0;
	for (int i = 0; i < N; i++) {
		if (vec.back() < arr[i]) {
			vec.push_back(arr[i]);
			length_of_lis++;
		}
		else {
			auto it = lower_bound(vec.begin(), vec.end(), arr[i]);
			*it = arr[i];
		}
	}

	cout << length_of_lis;

	return 0;
}