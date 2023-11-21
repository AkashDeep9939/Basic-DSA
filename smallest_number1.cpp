#include<bits/stdc++.h>
using namespace std;

int smallestNumber(int arr[],int n){
    sort(arr,arr+n);
    return arr[0];
}

//tiem complexit is nlogn for sorting 

int main(){
    cout<<"Enter size of array";
    int n;
    cin>>n;

    int arr[n];

    cout<<"Enter element of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = smallestNumber(arr,n);

    cout<<"Smallest element of array is "<<ans;
}
