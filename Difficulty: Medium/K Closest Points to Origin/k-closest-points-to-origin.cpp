//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    static int squaredDistance(vector<int>& point) {
        return point[0] * point[0] + point[1] * point[1];
        
    }
    static bool cmp(vector<int>&p1,vector<int>&p2){
        return squaredDistance(p1) < squaredDistance(p2);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Your code here
        sort(points.begin(),points.end(),cmp);
        return vector<vector<int>>(points.begin(),points.begin()+k);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());
        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends