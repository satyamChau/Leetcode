//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
//   bool matchkarjabhai(string &word, string &match){
//       string s ="";
      
//       for(char ch:word){
//           if(isupper(ch))
//              s +=ch;
//              if(s==match)
//                  return true;
//       }
//       return s==match;
//   }
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        // vector<string>ans;
        // for(string word:Dictionary){
        //     if(matchkarjabhai(word,Pattern))
        //          ans.push_back(word);
        // }
        // sort(ans.begin(), ans.end());
        // if(ans.empty())
        //   ans.push_back("-1");
           
           
        // return ans;
        
        vector<string> ans;
        
        for(int i=0; i<N; i++) {
            string temp;
            for(int j=0; j<Dictionary[i].size(); j++) {
                if(isupper(Dictionary[i][j])) {
                    temp.push_back(Dictionary[i][j]);
                }
                
                if(temp == Pattern) {
                    ans.push_back(Dictionary[i]);
                    break;
                }
            }
        }
        
        if(ans.size()) {
            return ans;
        }
        else {
            return {"-1"};
        
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends