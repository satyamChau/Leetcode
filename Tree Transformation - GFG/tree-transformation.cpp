//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    int solve(int N, vector<int> p){
        set<int>st;
        int cnt=0;
        for(int i=1; i<N; i++){
            if(p[i]==0){
                cnt++;
            }
            if(p[i]!=0 and p[i]!=-1){
                st.insert(p[i]);
                p[i]=0;
            }
        }
        
        if(cnt==1){
            return max((int)st.size()-1,0);
        }
        return st.size();
    }
};


//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> p(N);
        for(int i = 0; i < N; i++){
            cin >> p[i];
        }

        Solution obj;
        cout << obj.solve(N, p) << "\n";
    }
}   
// } Driver Code Ends