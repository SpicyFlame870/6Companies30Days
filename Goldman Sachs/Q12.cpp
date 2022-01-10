class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        
        
        return (long long)((long long)(N*(N+1))*(2*N+1))/6;
    }
};