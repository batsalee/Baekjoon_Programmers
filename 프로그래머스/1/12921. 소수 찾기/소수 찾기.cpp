#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int solution(int n) {
    vector<int> Eratosthenes(n + 1, 1);  
	Eratosthenes[0] = 0;
	Eratosthenes[1] = 0;

	for (int i = 2; i <= sqrt(n); i++) {
		if (Eratosthenes[i]) {
			for (int j = 2 * i; j <= n; j += i) {
				Eratosthenes[j] = 0;
			}
		}
    }
    
    return accumulate(Eratosthenes.begin(), Eratosthenes.end(), 0);
}