#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	set<string> Cheeses;
	string ingredient;
	while (N--) {
		cin >> ingredient;
		if (ingredient.size() >= 6 && ingredient.substr(ingredient.size() - 6) == "Cheese") 
			Cheeses.insert(ingredient);
	}

	cout << ((Cheeses.size() >= 4) ? "yummy" : "sad");

	return 0;
}