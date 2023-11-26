#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str,int n){
    int i = str[0];
    int j = str[n-1];

    while(i < j){
        if(str[i] != str[j])
        {
            return 0;
        }
        else
        {
            i++;
            j--;
        }
    }
    return 1;
}

int main(){
    string str = "NAMAN";
    int n = str.length();

    int ans = checkPalindrome(str,n);

    if(ans == true){
        cout<<"Palindrome";
    }
    else
    cout<<"Not a palindrome";
}