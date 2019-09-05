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
    cin>>x;
    while(x--){
    	ll k;
    	cin>>n>>k;
    	ll a[n];
    	For(n){
    		cin>>a[i];
    	}
    	sort(a,a+n);
    	ll diff = abs(a[0] - a[n-1]);
    	if(diff <= (2*k)){
    		y = a[0]+k ;
    		for(i=0;i<n;i++){
    			if(a[i] > y){
    				cout<<a[i-1];
    				break;
    			}
    		}
    		//cout<< y <<endl;
    	}
    	else{
    		cout<<-1<<endl;
    	}
    }
    return 0;
}




/*
#include <stdio.h>

int main(void) {
	int x=10 , y=25,z;
	z = y++ + x++  ;
	printf("%d",z);
	printf("%d",y);
	y = ++x + ++y  ;
	printf( " %d  %d  ",x,y) ;

	printf( " %d   ",sizeof(10.245f)) ;

	return 0;
}
*/
