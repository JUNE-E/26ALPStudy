#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll N,S;
ll ans=0x7fffffff,a[100001],st=0,en=0;;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>N>>S;
    for(ll i=0;i<N;i++) cin>>a[i];
    
    ll sum=0;
    while(st<=en && en<=N){
        if(sum>=S){
            ans=min(ans, en-st);
            sum-=a[st];
            st++;
            continue;
        }
        sum+=a[en];
        en++;
    }
    
    if(ans == 0x7fffffff) ans=0;
    cout<<ans;
}
