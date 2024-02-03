int solution(int n) {
    int answer = 0, left = 1, right = 1, sum;
    while(right <= n) {
        sum = (right - left + 1) * (right + left) / 2;
        (sum <= n) ? right++ : left++;
        
        if(sum == n) answer++;     
    }
    
    return answer;
}