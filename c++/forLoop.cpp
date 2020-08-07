#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a;cin>>b;
    for(int n=a;n<=b;n++)
    {
    if(n>=1&&n<=9)
    {
        if(n==1)
        cout<<"one\n";
        if(n==2)
        cout<<"two\n";
        if(n==3)
        cout<<"three\n";
        if(n==4)
        cout<<"four\n";
        if(n==5)
        cout<<"five\n";
        if(n==6)
        cout<<"six\n";
        if(n==7)
        cout<<"seven\n";
        if(n==8)
        cout<<"eight\n";
        if(n==9)
        cout<<"nine\n";
    }
    else if (n>9&&n%2==0) 
    {
        cout<<"even\n";
    }
    else if(n>9&&n%2==1)
    {
        cout<<"odd\n";
    }
    }
    return 0;
}

