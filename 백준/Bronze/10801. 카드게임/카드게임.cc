#include <bits/stdc++.h>
#define sync ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
	sync;

	int scoreA[10], scoreB[10];
	for (int i = 0; i < 10; i++) { cin >> scoreA[i]; }
	for (int i = 0; i < 10; i++) { cin >> scoreB[i]; }

	int A = 0, B = 0;
	for (int i = 0; i < 10; i++) {
		if (scoreA[i] > scoreB[i]) A++;
		else if (scoreA[i] < scoreB[i]) B++;
	}

	if (A > B) cout << 'A';
	else if (A == B) cout << 'D';
	else if (A < B) cout << 'B';

	return 0;
}