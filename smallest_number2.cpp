#include<bits/stdc++.h>
using namespace std;

int smallestNumber(int arr[],int n){
    int min = arr[0];
    for (int i = 0; i < n; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;

}

// time complexity of this code is O(N);

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
