#include<iostream>
using namespace std;
int cb(int a);
int sq(int a);
int main ()
{
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
	cout<<" Square of the number is : "<<sq(a)<<endl;
	cout<<"   Cube of the number is : "<<cb(a)<<endl;
	return 0;
}
int sq(int a)
{   
    int b;
	b=a*a;
	return b;
		      
}
int cb(int a)
{   
    int b;
	b=a*a*a;
	return b;		      
}
