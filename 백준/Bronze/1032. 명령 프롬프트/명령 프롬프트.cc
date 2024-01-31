#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;
	
	int N;
	cin >> N;

	vector<string> file(N);
	for (int i = 0; i < N; i++) { cin >> file[i]; }

	string result = "";
	bool flag;
	for (int j = 0; j < file[0].size(); j++) {
		flag = true;
		for (int i = 0; i < N; i++) {
			if (file[i][j] != file[0][j]) {
				flag = false;
				break;
			}
		}
		if (flag) result += file[0][j];
		else result += '?';		
	}
	
	cout << result;

	return 0;
}