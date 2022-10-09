class Solution {
  public:
    int isPerfectNumber(long long N) {
long long  sum=1,i;
if(N==1)
return 0;
for(i=2;i<sqrt(N);i++){
    if(N%i==0){
        sum+=i;
        sum+=N/i;
    }
}
if(sum==N)
return 1;
return 0;
    }
};
