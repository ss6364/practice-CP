//  https://codeforces.com/contest/1203/problem/C
// COMMON DEVISORS


#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll x=0,y=0,s=0,n=0,i=0;

int main(){
    IOS;
    cin >> n;
    ll a[n];
    For(n){
    	cin >> a[i];
    }
    ll gcd = a[0];
    for (i=0;i<n;i++){
    	gcd = __gcd(gcd,a[i]);
    }

    for (i=1; (i*i) <= gcd;i++){
    	if (gcd % i == 0){
    		x += 1;
    		if (i != (gcd/i)){
    			x+=1;
    		}
    	}
    }
    cout << x << endl;
    return 0;
}
