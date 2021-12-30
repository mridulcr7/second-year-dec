#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll n,ans=0;
    cin>>n;
    while (n % 2 == 0)
    {
        ans++;
        n = n/2;
    }

    for (ll i = 3; i*i <= n;i=i + 2)
    {
    
        while (n % i == 0)
        {
            ans++;
            n = n/i;
        }
    }
    if(n>2)
        ans++;
    cout<<ans<<"\n";
    return 0;
}
