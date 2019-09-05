// https://codeforces.com/contest/1206/problem/C
//    Almost Equal


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
    vector<ll> v((2*n + 10),0);
    x = (2*n);
    if (n%2 == 0){
    	cout <<"NO"<< endl;
    	return 0;
    }
    y = x;
    cout << "YES" << endl;
    for (i = 1; i <= n; i++){
    	if (i%2 == 1){
    		v[i] = i;
    	}
    	else{
    		v[i] = y;
    		y -= 2;
    	}

    }
    for (i = n+1; i <= x; i++){
    	if (i%2 == 0){
    		v[i] = v[i-n]+1;
    	}
    	else{
    		v[i] = v[i-n]-1;
    	}
    }

    for (i= 1;i<=x;i++){
    	cout << v[i] <<" ";
    }

    return 0;
}
