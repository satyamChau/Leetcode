//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string ans)
    {
        // Your code here
        stack<char>st;
       for(char i :ans){
           if(i=='(' || i=='{' || i=='['){
               st.push(i);
           } else {
            if ((i == ')') && (st.empty() || st.top() != '(')) return false;
            if ((i == '}') && (st.empty() || st.top() != '{')) return false;
            if ((i == ']') && (st.empty() || st.top() != '[')) return false;
            st.pop();
        }
    }
    return st.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends