// Linear Search

#include <iostream>
using namespace std;

// Defining linearSearch function 
int linearSearch(int *arr, int search_no, int n){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search_no)
            return i;
    }
    return -1;
}

// Driver code
int main() {
    cout << "input the number of items you want to enter\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"now input the number in your array\n";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<< "now input that no. you want to search\n";
    int search_no;
    cin>>search_no;
    int result= linearSearch(arr,search_no,n);
    if(result==-1)
        cout<<"You haven't Entered this no. in array\n";
    else
        cout<<"we found entered no. at index no: "<<result;
    return 0;
}


