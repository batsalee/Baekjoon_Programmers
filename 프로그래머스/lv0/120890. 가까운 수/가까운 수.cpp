#include <vector>
#include <algorithm>

int solution(std::vector<int> array, int n) {
       
    partial_sort(array.begin(), array.begin()+1, array.end(), 
                [n](const auto& a, const auto& b) 
                { 
                    if(abs(n - a) == abs(n - b))
                        return a < b;
                    return abs(n - a) < abs(n - b); 
                }
                );

    return array[0];
}