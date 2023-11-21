#include<bits/stdc++.h>
using namespace std;

int largestNumber(int arr[],int n){
   int max = arr[0];

   for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;

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

    int ans = largestNumber(arr,n);

    cout<<"Smallest element of array is "<<ans;
}
