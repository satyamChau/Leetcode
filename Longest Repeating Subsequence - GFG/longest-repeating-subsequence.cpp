//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    string st1 =str;
		    string st2 = str;
		    vector<vector<int>>dp(st1.size()+1,vector<int>(st2.size()+1,0));
		    for(int i=1; i<=st1.size();i++){
		        for(int j=1; j<=st2.size();j++){
		            if(st1[i-1]==st2[j-1] && i!=j){
		                dp[i][j] = 1 + dp[i-1][j-1];
		                
		            }else{
		                dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
		            }
		        }
		    }
		    return dp[st1.size()][st2.size()];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends