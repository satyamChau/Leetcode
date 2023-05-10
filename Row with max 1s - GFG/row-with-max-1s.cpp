//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
    
private:
    // int binarysearch(vector<int> &arr, int n) {
    //     int s=0 , e = n-1;
    //     int ans=-1;
    //     while(s<=e){
    //         int mid = s + (e-s)/2;
    //         if(arr[mid] == 1){
    //             ans = mid;
    //             e = mid-1;
    //         }
    //         else{
    //             s = mid+1;
    //         }
    //     }
    //     return ans;
    // }
public:

	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	   // int ans = -1;
	   // int mx=-1;
	   // for(int i=0; i<n; i++){
	   //    int index = binarysearch(arr[i], m);
	   //     if(index != -1 && m-index > mx){
	   //         mx = m-index ;
	   //         ans = i;
	   //     }
	   // }
	   // return ans;
	   int row = -1, j = m-1;
        for(int i = 0; i<n; i++)
        {
            while(j>=0 && arr[i][j] == 1)
            {
                j--;
                row = i;
            }
        }
        return row;
	            
	        
	    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends