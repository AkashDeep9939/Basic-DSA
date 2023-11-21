#include<bits/stdc++.h>
using namespace std;

int largestNumber(int arr[],int n){
    sort(arr,arr+n);
    return arr[n-1];

}

// time complexity of this code is O(NlogN);

int main(){
    cout<<"Enter size of array";
    int n;
    cin>>n;

    int arr[n];

    cout<<"Enter element of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = largestNumber(arr,n);

    cout<<"Smallest element of array is "<<ans;
}
