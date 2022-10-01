#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(int a[],int n){
    int low=0,high=n-1,temp;
    while(low<high){
        temp=a[low];
        a[low]=a[high];
        a[high]=temp;
        low++;
        high--;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
}
int main(){
    int i,n,a[100];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"reverse array is";
    reverse(a,n);
    return 0;
}