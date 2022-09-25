long long  numberOfPaths(int m, int n)
{
   if(n==1 ||m==1)
   return 1;
   return numberOfPaths(m-1,n)+numberOfPaths(m,n-1);
    
}
