// Left Rotate an Array by d places
// example:
// Input: arr[] = {1, 2, 3, 4, 5, 6, 7}
//        d = 2
// Output: arr[] = {3, 4, 5, 6, 7, 1, 2}

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>

// Efficient Solution
// Time Complexity: O(n)
// Space Complexity: O(d)

signed main(){
    int n,d;
    cin>>n>>d;
    vi v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
  
    // Efficient Approach
    int temp[d];
    for(int i=0;i<d;i++)
        temp[i]=v[i];   

    for(int i=d;i<n;i++)
        v[i-d]=v[i];

    for(int i=0;i<d;i++)
        v[n-d+i]=temp[i];
  
   for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
   return 0;
}
