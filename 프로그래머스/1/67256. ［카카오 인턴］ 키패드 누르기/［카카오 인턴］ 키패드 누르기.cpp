#include <vector>
#include <string>
using namespace std;

string answer = "";
int l_pos = 10, r_pos = 12;

int GetDistance(int from, int to) {
    int diff = abs(from - to);

    if (diff == 0) return 0;
    else if (diff == 1 || diff == 3) return 1;
    else if (diff == 2 || diff == 4 || diff == 6) return 2;
    else if (diff == 5 || diff == 7 || diff == 9) return 3;
    else if (diff == 8) return 4;
}

void MoveL(int to) {
    l_pos = to;
    answer.push_back('L');
}

void MoveR(int to) {
    r_pos = to;
    answer.push_back('R');
}

string solution(vector<int> numbers, string hand) {
    for (int n : numbers) {
        if (n == 0) n = 11;

        if (n == 1 || n == 4 || n == 7) MoveL(n);
        else if (n == 3 || n == 6 || n == 9) MoveR(n);
        else {
            int l_dis = GetDistance(l_pos, n);
            int r_dis = GetDistance(r_pos, n);

            if (l_dis < r_dis) MoveL(n);
            else if (l_dis > r_dis) MoveR(n);
            else if (l_dis == r_dis) hand == "left" ? MoveL(n) : MoveR(n);
        }
    }

    return answer;
}