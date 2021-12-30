 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
   int sum(int n)
   {
       if(n==0)
       {
           return 0;
       }
       return (n%10 + sum(n/10));
   }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,s=0,d;
    cin>>n;
    while(n>9)
    {
        n=sum(n);
        
    }
    cout<<sum(n)<<"\n";
    return 0;
}

