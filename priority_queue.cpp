
//by default priority queue creates max-heap.

#include <bits/stdc++.h>
using namespace std;



void showpq(priority_queue<int>pq)
{
    priority_queue<int>p = pq; //just copied it
    while(!p.empty())
    {
        cout<<"\t"<<p.top();
        p.pop();
    }
    cout<<"\n";
}


int main()
{
    priority_queue<int>pq; 

    // we can create a min heap priority queue using the below line
    //priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(20);
    pq.push(40);
    pq.push(30);
    pq.push(3);
    pq.push(1);

    cout<<"The priority Queue is: ";
    showpq(pq);

    
    
return 0;
}








