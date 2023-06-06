//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    bool sol(int n, int arr[],int total){
        vector<vector<int>>dp(n+1,vector<int>(total+1,0));
        
        for(int i=0; i<=n; i++){
            dp[i][0]=1;
            
        }
        for(int in=n-1;in>=0; in--){
            for(int j=0; j<=total/2; j++){
               bool a=0;
               if(j-arr[in]>=0)
                  a = dp[in+1][j-arr[in]];
               bool b = dp[in+1][j];
               
               dp[in][j] = a or b;
               
            }
            
        }
        return dp[0][total/2];
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int total=0;
        for(int i=0; i<N;i++){
            total +=arr[i];
            
        }
        if(total & 1)
          return 0;
        int target = total/2;
        return sol(N,arr,total);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends