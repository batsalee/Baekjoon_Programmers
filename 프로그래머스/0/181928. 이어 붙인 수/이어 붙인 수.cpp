#include <vector>
using namespace std;

int solution(vector<int> num_list) {
    int even = 0, odd = 0;
    for(int nl : num_list) {
        if(nl & 1) odd = odd * 10 + nl;
        else even = even * 10 + nl;
    }
    return even + odd;
}