//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        int n = s.length();
        string ans;
        unordered_map<char,int> mp;
        for(int i =0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                continue;
            }
            else{
                ans.push_back(s[i]);
                mp[s[i]] = 1;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends