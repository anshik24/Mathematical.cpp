class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        return sqrt(x);
        
        
        //-----------------------------OR--------------------------------------------------------
        int s=0;
        int e=x;
        int ans=0;
        long long int mid=s+(e-s)/2;
        while(s<=e){
            long long int sq=mid*mid;
            if(sq==x){
            return mid;
        }
        else if(sq<x){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        }
        return ans;
    }
};
