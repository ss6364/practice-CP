//      https://codeforces.com/contest/1206/problem/B
//          Make Product Equal One


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
    ll a[n+1];
    ll ans = 0;
    for (i=0;i<n;i++){
    	cin >> a[i];
    	if (a[i] == 0){
    		x++;
    	}
    	if (a[i] < 0){
    		ans += abs(a[i]+1);
    		a[i] = -1;
    		y++;
    	}
    	if (a[i] > 0){
    		ans += abs(a[i]-1);
    		a[i] = 1;
    	}
    }
    if (y%2 == 0 || (y%2 != 0 && x > 0)){
    	ans += x;
    }
    else {
    	ans += (x+2);
    }
    cout << ans << endl;

    return 0;
}
