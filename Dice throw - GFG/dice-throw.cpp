//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    long long sol(int a, int b, int c){
        vector<vector<long long>>dp(b+1, vector<long long>(c+1,0));
        dp[0][0]=1;
        
       
        for(int d=1;d<=b;d++){
            for(int e=1;e<=c;e++){
                 long long ans=0;
                  for(int i=1; i<=a;i++){
                    if(e-i>=0)
                      ans= ans + dp[d-1][e-i];
                }
                dp[d][e]=ans;
            }
        }
        return dp[b][c];
    }
    long long noOfWays(int M , int N , int X) {
        // code here 
        
        return sol(M,N,X);
        //   vector<long long> dp(X + 1 , 0);
        //   dp[0] = 1;
        
        // for(int i = 1 ; i <= N ; i++){
        //     for(int j = X ; j >= 0 ; j--){
        //         long long cnt = 0;
        
        //         for(int k = 1 ; k <= M ; k++){
        //             if(j - k >= 0){
        //                 cnt += dp[j - k];
        //             }
        //         }
                
        //         dp[j] = cnt;
        //     }
        // }
        
        // return dp[X];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}
// } Driver Code Ends