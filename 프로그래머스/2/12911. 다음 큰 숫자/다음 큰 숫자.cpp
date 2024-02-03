int count_binary(int n)
{
    int count = 0;
    while(n > 0) {
        if(n & 1) count++;
        n >>= 1;
    }
    
    return count; 
}

int solution(int n) {            
    int n_one = count_binary(n);    
    while(true) {
        if(n_one == count_binary(++n)) return n;
    }
}