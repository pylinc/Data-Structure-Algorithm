//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        vector<int> ans;
        
        int maxE = -1;
        int maxI = -1;
        
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            if(arr[i]>=maxE){
                maxE = arr[i];
                maxI = i;
            }
            
            if(i-k+1 > maxI){
                //find again
                maxE = -1;
                maxI = -1;
                
                for(int j=i-k+1;j<i+1;j++){
                    if(arr[j]>=maxE){
                        maxE = arr[j];
                        maxI = j;
                    }
                    
                }
                
            }
            
            
            if(i-k+1 >=0){
                ans.push_back(maxE);
                
            }
            
            
        }
        return ans;
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution obj;
        vector<int> res = obj.maxOfSubarrays(arr, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends