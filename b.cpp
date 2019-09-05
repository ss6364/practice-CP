

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
    	ll a,b;
    	cin>>y>>n>>a>>b;
    	ll tu =0,ptu =0;
    	if(y%a == 0){
    		tu = y/a -1;
    		if(a%b == 0)
    			ptu = (a/b - 1 );
    		else
    			ptu = (a/b);
    	}
    	else{
    		tu = y/a;
    		ll d = y%a ;
    		if((d)%b == 0)
    			ptu = (d/b - 1 );
    		else
    			ptu = (d/b);
    	}
    	if(ptu+tu >= n){
    		cout<<min(tu,n)<<endl;
    	}
    	ptu = y/b ;

    	if(y%b==0){
            ptu--;
    	}

    	if(ptu >= n){
            if(ptu == n){
                cout<<0<<endl;
            }
            else{
                    ll d=0;
                for( i =1;i<=tu;i++){
                    if(((a*i) + (b*(n-i))) <= (y-1)){
                        d = i;
                    }
                }
                cout<<d<<endl;
            }

    	}
    	else{
    		cout<<-1<<endl;
    	}


    }
    return 0;
}




/*
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
    		if(y>a[n-1]){
                cout<<a[n-1]<<endl;
    		}
    		else{

                for(i=0;i<n;i++){
                    if(a[i] > y){
                        cout<<a[i-1]<<endl;;
                        break;
                    }
                }
                //cout<< y <<endl;
    		}
    	}
    	else{
    		cout<<-1<<endl;
    	}
    }
    return 0;
}





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
