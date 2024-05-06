#include <string>
#include <regex>
using namespace std;

string solution(string myString, string pat) {
    regex re("(\\w*)" + pat + "\\w*");
    return regex_replace(myString, re, "$1" + pat);
}