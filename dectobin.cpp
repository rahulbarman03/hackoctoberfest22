#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double


//binary to decimal

void dectobin(int n){
    vector<int> s;
    while(n!=0){
        int k = n%2;
        s.push_back(k);
        n = n/2;
    }
  
  for (auto i = s.begin(); i != s.end(); ++i)
        cout << *i << " ";
}


// binary to decimal
int bintodec(int k){
   int base = 0;
   int dec =0;
  while(k!=0){
   int r = k%10;
   dec= dec + r * pow(2,base);
   base++;
   k=k/10;
  }

    return dec;
}


int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    int n;
    cin>>n;
    dectobin(n);

    int k = 101101;
    int a = bintodec(k);
    cout<<a<<endl;

    return 0;
}
