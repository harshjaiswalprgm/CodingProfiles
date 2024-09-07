class Solution {
  public:
    long long findNth(long long n) {
        long long r,res=0;
        int i=0;
        while (n>0){
            res+=pow(10,i++)*(n%9);
            n/=9;
        }
        return res;
    }


};