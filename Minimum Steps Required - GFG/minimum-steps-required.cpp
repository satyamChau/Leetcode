//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    int count =0;
    
    for(int i=0; i<str.length(); i++){
        if(str[i-1]!= str[i]){
            count++;
            
        }
        
        
           
    }
    return count/2+1;
    // if(count%2==0){
    //     return count/2+1;
    
    // }else{
    //     return ((count+1)/2)+1;
    // }
    
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends