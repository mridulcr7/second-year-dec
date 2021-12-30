#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
typedef long long ll;
using namespace std;

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

ll binpow(ll a, ll b, ll m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,z;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            z=0;
            if(gcd(n,i)==1)
            {
                ll mod=n;
                ll ans=binpow(i,n-1,mod);
                if(ans!=1)
                {
                    z++;
                    cout<<"false\n";
                    break;
                }
                    
            }
        }
        if(z==0)
            cout<<"true\n";
        
    }
    
    return 0;
}
