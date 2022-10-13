#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    
    while(i<=n){
        int j=1;
        int val=count;
        while(j<=i){
            cout<<val<<" ";
            val++;
        j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
