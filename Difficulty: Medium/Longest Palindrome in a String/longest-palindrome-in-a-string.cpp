//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solve(int i, int j, string &s ){
        int len = 0;
        while(i>=0 && j<s.size()){
            if(s[i]==s[j]){
                len+=2;
                i--;
                j++;
            }else break;
        }
        
        return len;
    }
    string longestPalindrome(string &s) {
        // code here
        int n = s.length();
        int maxi = 1;
        int start = 0;
        
        for(int i=0;i<n;i++){
            int len = 1 + solve(i-1, i+1, s);
            if(len>maxi){
                maxi = len;
                start = i - len/2;
            }
        }
        for(int i=1;i<n;i++){
            int len = solve(i-1, i, s);
            if(len>maxi){
            maxi = len;
            start = i- len/2;
            }
        }
        
        return s.substr(start, maxi);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends