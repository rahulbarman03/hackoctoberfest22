#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int left,int mid,int right)
{
    //number of elements in the divided arrays
    int nL=mid-left+1;  //nL number of elements in left array
    int nR = right-mid; //nR number of elements in right array

    int L[nL],R[nR]; //temporary arrays

    for(int i=0;i<nL;i++)
    {
        L[i] = arr[left+i]; 
    }
    for(int j=0;j<nR;j++)
    {
        R[j]=arr[mid+1+j];
    }

    int i=0,j=0,k=left;

    while(i<nL && j<nR)
    {
        if(L[i]<=R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    //copying the remaining elements
    while(i<nL)
    {
        arr[k]=L[i];
        i++;
        k++;
    }

    while(i<nR)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int left,int right)
{
    if(left<right)
    {
        int mid = left + (right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);

        //merging the sorted arrays
        merge(arr,left,mid,right);
    }
}
//printting the array
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);

    cout<<"The sorted Array is: "<<endl;
    printArray(arr,n);
    return 0;
}