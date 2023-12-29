/* 
                               Compiler vs Interpertator
   compiler and Inperator do 
   1) check error
   2) Xonvert into mechine code
   3) Execution

   Compiler does not takes responsiblity of execution of program but interprator does
   C++ is compiler based language it has no interperator
*/

// first cpp progam

#include<bits/stdc++.h>
using namespace std;

int add(int x,int y)
{
    int c;
    c = x + y;
    return c;
}

int main(){
    int x,y,z;
    x = 10;
    y = 20;

    z = add(x,y);

    cout<<"sum of x and y is"<<"="<<z<<endl;
}