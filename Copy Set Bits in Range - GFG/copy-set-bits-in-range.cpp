//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        int ans =1;
        int m =x;
        int n =1;
        while(ans!=l){
            x /=2;
            y/=2;
            ans++;
            n = n*2;
        }
        for(int i=l; i<=r; i++){
            if(x%2==0 && y%2==1)
                m +=n;
                x/=2;
                y/=2;
                n = n*2;
            
        }
        return m;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends