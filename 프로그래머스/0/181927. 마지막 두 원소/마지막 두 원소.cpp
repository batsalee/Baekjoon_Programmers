#include <vector>
using namespace std;

vector<int> solution(vector<int> num_list) {
    if(*num_list.rbegin() > *(num_list.rbegin() + 1)) 
        num_list.push_back(*num_list.rbegin() - *(num_list.rbegin() + 1));
    else num_list.push_back(*num_list.rbegin() * 2);        
    
    return num_list;
}