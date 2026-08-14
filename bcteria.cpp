#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll bitsCount(ll x, ll system){

    // init total
    ll res = 0;
    
    while (x > 0){
        res += x%system;
        x /= system;
    }
    
    // print
    return res;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    ll x; cin >> x;
    
    cout << bitsCount(x, 2);
    
    return 0;
}