#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        int k,n,m=0;
        cin>>k>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=k;i<n;i++)
            b[m++]=a[i];
        for(int i=0;i<k;i++)
            b[m++]=a[i];
        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
