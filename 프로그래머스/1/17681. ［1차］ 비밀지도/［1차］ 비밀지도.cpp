#include <vector>
#include <string>
#include <cmath>
using namespace std;

string GetBinary(int n, int value) { // 자릿수, 값
    string binary = "";
    for(int i = pow(2, n - 1); i >= 1; i /= 2) {
        if(value >= i) {
            binary.push_back('1');
            value -= i;
        }
        else binary.push_back('0');
    }
    
    return binary;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for(int i = 0; i < n; i++) {
        string binary1 = GetBinary(n, arr1[i]);
        string binary2 = GetBinary(n, arr2[i]);
        
        string result = "";
        for(int j = 0; j < n; j++) {
            if(binary1[j] == '0' && binary2[j] == '0') result.push_back(' ');
            else result.push_back('#');
        }
        answer.push_back(result);        
    }
    
    return answer;
}