// Left Rotate an Array by D places
// example:
// Input: arr[] = {1, 2, 3, 4, 5, 6, 7}
//        d = 2
// Output: arr[] = {3, 4, 5, 6, 7, 1, 2}

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>

// Optimal Solution
// Time Complexity: O(n)
// Space Complexity: O(1)

signed main(){
    int n,d;
    cin>>n>>d;
    vi v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
  // More Efficient Approach
    // Reversal Approach
    // 1. Reverse the first d elements
    // 2. Reverse the last n-d elements
    // 3. Reverse the whole array

    reverse(v.begin(),v.begin()+d);
    reverse(v.begin()+d,v.end());
    reverse(v.begin(),v.end());

    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}

