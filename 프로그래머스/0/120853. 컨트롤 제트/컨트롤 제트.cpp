#include <string>
#include <vector>
#include <sstream>
#include <numeric>

using namespace std;

int solution(string s) {
    stringstream stream;
    stream.str(s);
    
    string num;    
    vector<int> numbers;
    while(stream >> num) {
        if(num == "Z" && !numbers.empty()) numbers.pop_back();            
        else numbers.push_back(stoi(num));
    }     

    return accumulate(numbers.begin(), numbers.end(), 0);
}