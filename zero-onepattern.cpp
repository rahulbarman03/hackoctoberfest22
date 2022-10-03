#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
