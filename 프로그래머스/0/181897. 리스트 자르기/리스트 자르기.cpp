#include <vector>
using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    int coo[][3] = {{0, 0, 0}, {0, slicer[1], 1}, 
                    {slicer[0], (int)num_list.size() - 1, 1},
                    {slicer[0], slicer[1], 1}, 
                    {slicer[0], slicer[1], slicer[2]}};
    
    vector<int> answer;
    for(int i = coo[n][0]; i <= coo[n][1]; i += coo[n][2]) {
        answer.push_back(num_list[i]);
    }
    
    return answer;
}