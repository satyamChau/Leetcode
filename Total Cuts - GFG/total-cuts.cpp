//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{

      
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        // vector<int>ans(N,0);
        // ans[N-1] = A[N-1];
        // for(int i=N-2;i>=0; i--){
        //     ans[i] = min(ans[i+1],A[i]);
        // }
        // int ans2 = A[0];
        // int cnt=0;
        // for(int i=1; i<N; i++){
        //     if(ans2+ans[i]>=K){
        //         cnt++;
        //         ans2 = max(ans2,A[i]);
        //     }
        // }
        // return cnt;
         vector<int> pref(N, 0);
        pref[N-1] = A[N-1];
        for(int i = N-2; i>=0 ; i--){
            pref[i] = min(pref[i+1],A[i]);
        }
        int maxi = A[0];
        int ans = 0;
        for(int i = 1; i < N; i++){
            if(maxi + pref[i] >= K)
                ans++;
            maxi = max(maxi, A[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends