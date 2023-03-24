#include <vector>

int solution(std::vector<int> common) {
    if(common[1] - common[0] == common[2] - common[1]) // 등차수열
        return common.back() + (common[1] - common[0]);
    else if(common[1] / common[0] == common[2] / common[1]) // 등비수열
        return common.back() * (common[1] / common[0]);
}