int solution(int n) {
    int answer = 0;
    
    for(int i = 0; i < n; i++) {
        do {
            answer++;  
        } while (answer % 3 == 0 || answer % 10 == 3 
                 || answer % 100 / 10 == 3 || answer / 100==3);
    }
    
    return answer;
}