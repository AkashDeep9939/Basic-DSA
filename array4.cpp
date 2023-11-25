#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
    int i = 0;
    int j = n-1;
    while (i < j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}