#include<bits/stdc++.h>
using namespace std;



int fact(int n)
{
    if(n==0)
        return 1;
    return n * fact(n-1);
}

int detect(int n)
{
    int digit,sum=0;
    int temp = n;

    while(temp!=0)
    {
        digit = temp%10;
        sum = sum + fact(digit);
        temp /=10;
    }

    return sum==n;
}
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    
    if(detect(n))
    {
        cout<<"It is a strong number";
    }
    else{
        cout<<"It is a not strong number";
    }

    return 0;

}