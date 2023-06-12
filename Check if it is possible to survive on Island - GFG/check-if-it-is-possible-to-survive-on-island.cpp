//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
       
       int sun=S/7;
       int buy = S-sun;
       int tot = S*M;
       int ans =0;
       if(tot%N==0){
           ans = tot/N;
       }else{
           ans = tot/N+1;
       }
       if(ans<=buy){
           return ans;
       }else{
           return -1;
       }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends