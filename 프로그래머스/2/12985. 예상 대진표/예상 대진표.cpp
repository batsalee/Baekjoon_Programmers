#include <algorithm>
using namespace std;

int solution(int n, int a, int b)
{
	if (a > b) swap(a, b);
	int answer = 1;	
	while (true)
	{
		if ( (a & 1) && (b == a + 1) ) return answer;
		else {
			answer++;
			a = (a + (a & 1)) / 2;
			b = (b + (b & 1)) / 2;
		}
	}
}