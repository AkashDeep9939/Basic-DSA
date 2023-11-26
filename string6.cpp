#include<bits/stdc++.h>
using namespace std;

string solve(string str,int n){
    string ans;
    for(int i=0;i<n;i++){
        if(str[i] >= 'a' && str[i]<= 'z'){
            ans += str[i];
        }
        else
        i++;
    }
    return ans;
}

int main(){
    string str = "take12% *&u ^$#forward";
    int n = str.size();

    cout<<solve(str,n);
}