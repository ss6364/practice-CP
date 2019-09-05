//   https://codeforces.com/contest/1203/problem/A
//   Circcle of Students

#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll x=0,y=0,n=0,i=0;

int main(){
    IOS;
    cin >> x;
    while (x--){
        cin >> n;
        ll a[n+1];
        For (n){
            cin >> a[i];
            if (a[i] == n){
                y = i;
            }
        }
        ll f = 0;
        //set<ll> s;
        for (i=0;i<n-1;i++){
            ll d = abs(a[i+1]-a[i]);
            if (d!=1 && d != (n-1)){
                cout << "NO\n";
                f = 1;
                break;
            }
        }

        if (f==0){
            cout <<"YES\n";
        }

    }
    return 0;
}
