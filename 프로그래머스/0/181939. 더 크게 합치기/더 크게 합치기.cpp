#include <string>
using namespace std;

int solution(int a, int b) {
    int apb = stoi(to_string(a) + to_string(b));
    int bpa = stoi(to_string(b) + to_string(a));
    return max(apb, bpa);
}