#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n; v.resize(n);
    for(int i=0; i<n; i++) cin >> v[i]; 
    sort(v.begin(), v.end());
    
    int a = 0, b = 0;
    int ans = 2000000000;
    
    // 탐색
    for(int i=0; i<n; i++){
        // v[i]랑 더해서 0에 가장 가까워지려면, -v[i]와 가까운 값을 찾아야 함
        int x = lower_bound(v.begin(), v.end(), -v[i]) - v.begin();
        
        // 경우 1: x가 범위 내에 있고, 자기 자신이 아닐 때
        if(x < n && x != i){
            if(abs(v[i] + v[x]) < ans){
                ans = abs(v[i] + v[x]);
                a = v[i]; 
                b = v[x];
            }
        }
        
        // 경우 2: x-1이 범위 내에 있고, 자기 자신이 아닐 때
        if(x - 1 >= 0 && (x - 1) != i){
            if(abs(v[i] + v[x-1]) < ans){
                ans = abs(v[i] + v[x-1]);
                a = v[i]; 
                b = v[x-1];
            }
        }
    }
    cout << min(a, b) << ' ' << max(a, b);
    
    return 0;
}
