int solution(int slice, int n) {
    return (n%slice) ? (n/slice+1) : (n/slice);
}