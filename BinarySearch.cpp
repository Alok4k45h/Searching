// Binary Search using while loop

#include <iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int element)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==element)
            return 1;
        else if(arr[mid]>element)
            high=mid-1;
        else
            low=mid+1;

    }
    return 0;
}


// Driver Code
int main()
{
    int size,element;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cin>>element;

    if(binarySearch(arr,0,size-1,element))
        cout<<"elements is present in given array";
    else
        cout<<"elements is not present in given array";
    return 0;
}
