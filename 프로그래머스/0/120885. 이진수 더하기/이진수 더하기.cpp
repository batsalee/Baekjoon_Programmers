#include <string>
#include <bitset>
#include <iostream>

using namespace std;

string solution(string bin1, string bin2) {
    
    bitset<8*sizeof(int)> b1(bin1);
    bitset<8*sizeof(int)> b2(bin2);
    
    int sum = b1.to_ulong() + b2.to_ulong();
    
    string answer = "";    
    while(sum >= 1) {
        answer = to_string(sum % 2) + answer;
        sum /= 2;
    }
    if(answer == "") return "0";
    else return answer;
}