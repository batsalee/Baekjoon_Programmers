#include <string>
#include <vector>

long long solution(std::string numbers) {
    std::vector<std::string> num_alpha = 
    {"zero", "one", "two", "three", "four",
     "five", "six", "seven", "eight", "nine"};
    
    for(int i = 0; i < num_alpha.size(); i++) {
        for(int j=0; j < numbers.length(); j++) {
            int index = numbers.find(num_alpha[i]);
            if(index != std::string::npos)
                numbers.replace(index, num_alpha[i].length(), std::to_string(i));
        }
    }
    
    return stoll(numbers);
}