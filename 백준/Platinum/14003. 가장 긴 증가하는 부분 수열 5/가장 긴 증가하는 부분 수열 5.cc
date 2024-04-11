#include <bits/stdc++.h>
using namespace std;

#define INF 2147483647

int main()
{
    int N;
    cin >> N;

    vector<int> input(N), index(N);;
    for (int i = 0; i < N ; i++) { cin >> input[i]; }

    vector<int> lis_vec;
    lis_vec.push_back(-INF);
    for (int i = 0; i < N; i++) {
        if (lis_vec.back() < input[i]) {
            lis_vec.push_back(input[i]);
            index[i] = lis_vec.size() - 1;
        }
        else {
            auto itr = lower_bound(lis_vec.begin(), lis_vec.end(), input[i]);
            *itr = input[i];
            index[i] = itr - lis_vec.begin();
        }
    }
    
    int lis = lis_vec.size() - 1;
    cout << lis << '\n';

    vector<int> answer;
    for (int i = N - 1; i >= 0; i--) {
        if (index[i] == lis) {
            answer.push_back(input[i]);
            lis--;
        }
    }

    for (auto ritr = answer.rbegin(); ritr != answer.rend(); ritr++) {
        cout << *ritr << ' ';
    }
    
    return 0;
}