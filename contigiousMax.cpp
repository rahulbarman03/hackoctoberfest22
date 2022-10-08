#include<iostream>
#include<climits>
using namespace std;
void maxSubarraySum(int a[], int size)
{
  int max_so_far = INT_MIN, max_ending_here = 0,
       start =0, end = 0, s=0;

    for (int i=0; i< size; i++ )
    {
        max_ending_here += a[i];

        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }

        else if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    cout << "Maximum contiguous sum is "
        << max_so_far << endl;
    cout << "Starting index "<< start
        << endl << "Ending index "<< end << endl;
}
int main()
{
    int t;
    cout<<"How many trials"<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"How many nos of element : ";
        cin>>n;
        int a[n];
        cout<<"Enter the element with negative and positive integer : "<<endl;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cout<<" The Sum of subarray is : ";
        maxSubarraySum(a,n);
    }
}