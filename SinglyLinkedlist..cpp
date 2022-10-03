#include<iostream>
using namespace std;

class Node
{
	private:
		int val;
		Node *nextNode;
	
	public:
		void setVal(int v)
		{
			val = v;
		}
		int getVal()
		{
			return val;
		}
		
		void setNextNode(Node *next)
		{
			nextNode = next;
		}
		Node* getNextNode()
		{
			return nextNode;
		}
		
};

class LList
{
	private:
		Node *head;
		Node *last;
		Node *current;
		int size;
	
	public:
		
		LList()
		{
			head = new Node();
			current = head;
			last = head;
			size = 0;
		}
		
		void addToEndOfList(int v)
		{
			
			Node *temp = new Node();
			temp->setVal(v);
			temp->setNextNode(NULL);
			
			
			last->setNextNode(temp);
			last = temp;
			size++;
		}
		
		void addNodeToCurrent(int v)
		{
			Node *tempNode = new Node();
			tempNode->setVal(v);
			
			tempNode->setNextNode(current->getNextNode()); 
			current->setNextNode(tempNode);
			current = tempNode;
			
			size++;
			
		}
		
		void printList()
		{
			Node *TCurrent = head->getNextNode();
			for(int i=0; i<size; i++)
			{
				cout<<TCurrent->getVal()<<" ";
				TCurrent = TCurrent->getNextNode();
			}
		}
		
		
		
};

int main()
{
	LList myList;
	bool hold = true;
	string choise;
	
	while(hold==true)
	{
	
	
	cout<<"\nPress 1 to ADD at End";
	cout<<"\nPress 2 to ADD at Current";
	cout<<"\nPress 3 to Print";
	cout<<"\nChoise: ";
	cin>>choise;
	if(choise=="1")
	{	
		int num;
		cout<<"\n\nEnter Value: ";
		cin>>num;
		myList.addToEndOfList(num);
		
	}
	if(choise=="2")
	{
		int num;
		cout<<"\n\nEnter Value: ";
		cin>>num;
		myList.addNodeToCurrent(num);
	}
	if(choise =="3")
	{
		cout<<"\n";
		myList.printList();
	}
	}
	
}
