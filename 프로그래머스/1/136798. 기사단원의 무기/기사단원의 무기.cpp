int CountDivisor(int n)
{
    if(n == 1) return 1;
    
    int count = 0;
    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0) count++;        
    }
        
    return count + 1;
}

int solution(int number, int limit, int power) {
    int answer = 0, kg;
    for(int i = 1; i <= number; i++) {
        kg = CountDivisor(i);
        answer += (kg> limit) ? power : kg;
    }
    
    return answer;
}