#include<bits/stdc++.h>
#include<string>
using namespace std;
enum arrsize{siz=25}arrs;
class Stack
{
private:
    int top,arr[siz];
    public:
Stack(int n):top(-1)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
    }
}
bool isempty()
{
    if(top==-1)
        return true;
    else
        return false;
}
int display(int n)
{
        for(int i=n-1;i>=0;i--)
            cout<<arr[i]<<" ";
}
bool isFull(int n)
{
    if(top==n-1)
    return true;
    else
        return false;
}
void Push(int n)
{
    if(isFull(n))
    cout<<"stack  overflow\n";
   else{ int temp;
    cout <<"enter value for pushing:";
    cin>>temp;
    top++;
    arr[top]=temp;}
}
int pop()
{
    if(isempty())
        cout<<"overflow\n";
    else
    {int popremove;
         popremove=arr[top];
        arr[top]=0;
        top--;
        return popremove;
    }

}
int peek()
{
    if(isempty())
        {cout<<"overflow";
    return 0;}
    else
    {int pos;
        cout<<"enter position you want to see";
        cin>>pos;
        return arr[pos];
    }
}
int change()
{
    if(isempty())
        cout<<"overflow";
    else
    {
        int pos,value;
        cout<<"enter position where you want to change value:";cin>>pos;
        cout<<"\n"<<"enter value:";cin>>value;
        arr[pos]=value;
    }
}
int countInstack()
{
    return (top+1);
}
};

int main()
{
    int n;
    int value,choice;
     arrs=siz;
     cout<<"enter size of stack:";
     cin>>n;
     Stack s1(n);
   while(1){ cout<<"for performing operation please choose following option\n";
    cout<<"1.Display\n";
    cout<<"2.Push\n";
    cout<<"3.Pop\n";
    cout<<"4.Peek\n";
    cout<<"5.is stack empty\n";
    cout<<"6.change value\n";
    cout<<"7.count nu. of items\n";
    cout<<"8.is Stack full\n";
    cout<<"Press -1 for exit\n";
    cin>>choice;
    switch(choice)
    {
    case 1:
        s1.display(n);
        break;
    case 2:
        s1.Push(n);
        break;
        case 8:
             if(s1.isFull(n)==true)
                cout<<"stack is Full\n";
            else
               cout<< "stack is not Full\n";
            break;
        case 3:
            s1.pop();
            break;
        case -1:
            exit(0);
        case 4:
           cout<<s1.peek();
            break;
        case 5:
            if(s1.isempty()==true)
                cout<<"stack is empty\n";
            else
               cout<< "stack is not empty\n";
            break;
        case 7:
           cout<<"number of items is:"<<s1.countInstack()<<endl;
            break;
            case 6:s1.change();break;
            default:
                cout<<"give your input in proper way\n";
    }
    }
    return 0;
}
