//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        // int cnt =0;
        // unordered_map<int,int>mp;
        // for(int i:mp){
        //     mp[i]++;
            
        // }
        // for(int i=0; i<n; i++){
        //     int sum =numerator[] + denominator[];
        //     if(mp[sum]==1){
        //         cnt++;
        //     }
        // }
        // return cnt;
         int cnt=0;
        map<pair<int,int>,int>mp;
        for(int i=0;i<n;i++){
            int s=__gcd(numerator[i],denominator[i]);
            int a=numerator[i]/s;
            int b=denominator[i]/s;
            if(mp.find({b-a,b})!=mp.end()){
                cnt+=mp[{b-a,b}];
            }
            ++mp[{a,b}];
        }
        return cnt;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends