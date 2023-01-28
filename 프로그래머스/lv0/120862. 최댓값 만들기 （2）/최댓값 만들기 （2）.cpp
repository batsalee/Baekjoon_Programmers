#include <vector>
#include <algorithm>

int solution(std::vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    
    int top = (*(numbers.end()-1)) * (*(numbers.end()-2));
    int bottom = (*(numbers.begin())) * (*(numbers.begin()+1));
       
    return std::max(top, bottom);
}