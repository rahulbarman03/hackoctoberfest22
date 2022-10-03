#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

   

    for(int i =1;i<=3;i++){
        for(int j=1;j<=9;j++){
            if((i+j)%4==0 || (i==2 && j%4==0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
