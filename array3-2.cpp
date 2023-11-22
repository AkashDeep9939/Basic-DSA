#include<bits/stdc++.h>
using namespace std;

int getElement(int arr[],int n){
    int small = INT_MAX;
    int ssmall = INT_MAX;

    int large = INT_MIN;
    int slarge = INT_MIN;

    for(int i=0;i<n;i++){
        small = min(arr[i],small);
        large = max(arr[i],large);
    }

    for(int i=0;i<n;i++){
        if(arr[i]<ssmall && arr[i] != small)
        ssmall = arr[i];
        if(arr[i]>slarge && arr[i]!= large)
        slarge = arr[i];
    }

    cout<<"second smallest element is "<<ssmall<<endl;
    cout<<"secondn largest element is "<<slarge<<endl;
}

int main(){
    int arr[] = {1,2,4,6,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    getElement(arr,n);
    return 0;
}

// better solution time complexity O(N);
// space is O(1);