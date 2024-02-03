#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string s) {
	int repeat = 0, sum_zero = 0;
	int now_length, count_one, count_zero;
	while (s != "1") {
		now_length = s.size();
		count_one = count(s.begin(), s.end(), '1');
		count_zero = now_length - count_one;
		
		s = "";
		while (count_one != 0) {
			s.push_back('0' + count_one % 2);
			count_one /= 2;		
		}
		reverse(s.begin(), s.end());
		repeat++;
		sum_zero += count_zero;
	}

    vector<int> answer;
    answer.push_back(repeat);
    answer.push_back(sum_zero);
    
    return answer;
}