// find second smallest ans second largest element in array 

#include<bits/stdc++.h>
using namespace std;

int getElements(int arr[],int n){
    sort(arr,arr+n);
    cout<<"Second smallest is "<<arr[1];
    cout<<"Second largest is "<<arr[n-2];
}

int main(){
    int arr[] = {1,24,6,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    return 0;
}