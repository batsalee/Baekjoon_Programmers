#include <iostream>

using namespace std;

int main()
{
	int fixed_cost; // A : 고정비용
	int variable_cost; // B : 가변비용
	int price; // C : 노트북 가격

	cin >> fixed_cost >> variable_cost >> price;

	if (variable_cost >= price)
		cout << "-1";
	else
		cout << (fixed_cost/(price-variable_cost))+1;

	return 0;
}