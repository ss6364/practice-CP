












































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
    cin >> n >> x;
    ll a[n+2],b[n+2];
    For(n){
    	cin >> a[i];
    }
    For(n){
    	cin >> b[i];
    }
    sort (a, a+n, greater<int>());
    sort(b, b+n);
    cout <<"1 ";
    ll j = 0;
    y = 0;

    for (i = 0;i<n;i++){
    	while (j < n){
    		if((a[i] + b[j]) >= x){
    			y++;
    			break;
    		}
    		j++;
    	}
    }
    cout << (y+1)<< endl;
    return 0;
}
