// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int sum=0;
    while(n){
        int rem = n% 10;
        if(rem==0)
        rem =5;
        sum = sum * 10 +rem;
    n=n/10;
        }
        while(sum){
            int r= sum% 10;
        n=n*10+r;
        sum = sum/10;
}
return n;
}
