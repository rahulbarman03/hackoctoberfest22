// Integer to Roman

#include <bits/stdc++.h>
using namespace std;

string intToRoman(int nums) {
        // adding null at the beginning of each array as index starts from 0
        // and I want index number to be same as value at that index.
        string ones[] = {"","I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string tens[] = {"","X", "XX", "XXX", "XL","L","LX","LXX","LXXX","XC"};
        string hundrds[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thusnds[] = {"","M","MM","MMM"};
        
        return (thusnds[nums/1000] + hundrds[(nums%1000)/100] + tens[(nums%100)/10] + ones[nums%10]);
        
        /*
        nums = 1994
         thusnds[nums/1000] = thusnds[1994/1000] = thusnds[1] = "M"
         hundrds[(nums%1000)/100] = hundrds[(1994%1000)/100] = hundrds[994/100] = hundrds[9] = "CM"
         tens[(nums%100)/10] = tens[(994%100)/10] = tens[94/10] = tens[9] = "XC"
         ones[nums%10] = ones[94%10] = ones[4] = "IV"
        */
}
int main(){
     int n;
     cin>>n;
     cout<<intToRoman(n);
     return 0;
}
