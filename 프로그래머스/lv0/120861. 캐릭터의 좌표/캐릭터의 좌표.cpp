#include <string>
#include <vector>

std::vector<int> solution(std::vector<std::string> keyinput, std::vector<int> board) {
    std::vector<int> answer(2, 0);
    
    const int left_border = -1 * board[0] / 2;
    const int right_border = board[0] / 2;
    const int top_border = board[1] / 2;
    const int bottom_border = -1 * board[1] / 2;
    
    for(auto& sv : keyinput) {
        if(sv == "up" && top_border >= answer[1] + 1) answer[1]++;
        else if(sv == "down" && bottom_border <= answer[1] - 1) answer[1]--;
        else if(sv == "left" && left_border <= answer[0] - 1) answer[0]--;
        else if(sv == "right" && right_border >= answer[0] + 1) answer[0]++;
    }
    
    return answer;
}