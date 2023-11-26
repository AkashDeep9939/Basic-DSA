#include<bits/stdc++.h>
using namespace std;

string reverseString(string str,int n){
    string ans;
    for(int i=n;i>=0;i--){
        ans += str[i];
    }
    return ans;
}


int main(){
    string str = "I am iron man";
    int n = str.size();

    cout<<reverseString(str,n);

    

    
}