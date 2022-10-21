// Left Rotate an Array by D places
// example:
// Input: arr[] = {1, 2, 3, 4, 5, 6, 7}
//        d = 2
// Output: arr[] = {3, 4, 5, 6, 7, 1, 2}

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>

// naive solution
// Time Complexity: O(n*d)
// Space Complexity: O(1)

signed main(){
    int n,d;
    cin>>n>>d;
    vi v(n);/
    for(int i=0;i<n;i++)
        cin>>v[i];

    // Naive Approach
    while(d--)
    {
        for(int i = 0; i < n-1; i++)
        {
            swap(v[i],v[i+1]);
        }    
    }
  
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}




   
