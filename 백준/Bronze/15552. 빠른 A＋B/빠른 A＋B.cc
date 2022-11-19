#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;

	int num1, num2;
	for (int i = 0; i < count; i++)
	{
		scanf("%d %d", &num1, &num2);
		printf("%d\n", num1 + num2);
	}
}