// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        int digit,temp,n,rev=0;
        int val;
        while(N!=0){
            temp=N%10;
            n+=temp;
            N=N/10;
        }
        val=n;
        while(n!=0){
            digit=n%10;
            rev=(rev*10)+digit;
            n=n/10;
        }
        if(val==rev){
            return 1;
            
        }
        else
        return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends
