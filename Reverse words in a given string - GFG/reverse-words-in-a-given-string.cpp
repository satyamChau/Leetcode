//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
       string ans="";
       string tem="";
       for(int i=S.length()-1; i>=0; i--){
           if(S[i]=='.'){
               reverse(tem.begin(),tem.end());
               ans +=tem;
               ans.push_back('.');
               tem="";
           }else{
               tem.push_back(S[i]);
           }
            
           
       }
        reverse(tem.begin(),tem.end());
        ans +=tem;
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends