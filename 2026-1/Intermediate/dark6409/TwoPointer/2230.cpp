#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,M=0x7fffffff,a[100001],st=0,en=0;;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>n>>m;
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a, a+n);
    
    while(en<n){
        if(a[en]-a[st] >= m) {
            M=min(M, a[en]-a[st]);
            st++;
            continue;
        }
        if(a[en]-a[st] < m) en++;
    }
    
    cout<<M;
    
    return 0;
}
