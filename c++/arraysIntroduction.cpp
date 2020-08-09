#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   // constant int a=1000;
    int n,i=0,j;
    cin>>n;
    int ar[n];
    //cout<<"\n";
    for( ;i<n;i++)
    {
        cin>>ar[i];

    }
    for( j=(n-1);j>=0;j--)
    {
        printf("%d ",ar[j]);
    }
    return 0;
}
