//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
           string st="",pt="";
            for(int i=s.size()-1; i>=0; i--){
                if(s[i]<'0' || s[i]>'9'){
                    reverse(pt.begin(), pt.end());
                    st +=pt;
                    st +=s[i];
                    pt="";
                }
                else{
                    pt+=s[i];
                }
            
            }
            reverse(pt.begin(),pt.end());
             st+=pt;
            return st;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends