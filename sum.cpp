#include<stdio.h>
#include<conio.h>
int main()
{
	int n, s, i;
	printf("Enter the value of n = ");
	scanf("%d",&n);	
	s=0;
	for(i=1;i<=n;i++)
	{ if(i%2==0)
	s=s-i;
	else
	s=s+i;	
	}
	printf("the required sum is %d",s);
	getch();
}
