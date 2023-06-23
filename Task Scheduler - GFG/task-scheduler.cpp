//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
       int ans[26] = {0};
       int maximum = 0;
       for(auto i:tasks){
           ans[i-'A']++;
           maximum = max(maximum,ans[i-'A']);
       }
       int sum =0;
       for(int i=0; i<26; i++){
           if(ans[i]==maximum){
               sum++;
           }
           
       }
       int t = (maximum -1 )*(K+1) + sum;
       return max(t,N);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends