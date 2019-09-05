//   https://codeforces.com/contest/1203/problem/E
//     BOXERS


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
    cin >> n;
    ll a[n+1];
    set<ll> s;
    for (i=0;i<n;i++){
    	cin >> a[i];
    	s.insert(a[i]);
    }
    x = s.size();
    s.clear();
    sort(a,a+n);
    if (x == n){
    	cout << x << endl;
    }
    else{
    	for (i = 0; i < n; i++){
	    	if (i == 0 && a[i] > 1){
	    		a[i]--;
	    	}
	    	else if(i == n-1 && a[i] <= 150000){
	    		a[i]++;
	    	}
	    	else if (s.find((a[i]-1)) == s.end() && a[i] > 1) {
	    		a[i]--;
	    	}
	    	else if (s.find(a[i]) == s.end()){
	    		a[i];
	    	}
	    	else {
	    		a[i]++;
	    	}


	    	s.insert(a[i]);
	    }
	    y = s.size();
	    x = max(x,y);
	    cout << x<< endl;
    }


    return 0;
}
