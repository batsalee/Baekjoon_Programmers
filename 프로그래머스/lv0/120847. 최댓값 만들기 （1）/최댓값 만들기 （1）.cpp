#include <algorithm>
#include <vector>

int solution(std::vector<int> numbers) {
        
    partial_sort(numbers.begin(), numbers.begin()+2, numbers.end(),
                [](int a, int b) {return a>b;}
                );
    
    return numbers[0] * numbers[1];
}