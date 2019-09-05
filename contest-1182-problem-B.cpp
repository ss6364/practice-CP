//  https://codeforces.com/contest/1182/problem/B
//     plus from picture

#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll x=0,j,y=0,s=0,n=0,i=0;

int main(){
    IOS;
    cin>>x>>y;
    char a[x][y];
    for(i=0;i<x;i++){
    	for(j=0;j<y;j++){
    		cin>>a[i][j];
    	}
    }

    for(i=1;i<x-1;i++){
    	for(j=1;j<y-1;j++){
    		if(a[i][j]=='*' && a[i-1][j]=='*' && a[i+1][j]=='*' && a[i][j+1]=='*' && a[i][j-1]=='*'  ){
    			s = 1;
    			ll k=i-1;
    			while(a[k][j]!='.' && k>=0){
    				a[k][j]='.';
    				k--;
    			}

    			k=j-1;
    			while(a[i][k]!='.' && k>=0){
    				a[i][k]='.';
    				k--;
    			}

    			k=i+1;

    			while(a[k][j]!='.' && k<x){
    				a[k][j]='.';
    				k++;
    			}



    			k=j+1;
    			while(a[i][k]!='.' && k<y){
    				a[i][k]='.';
    				k++;
    			}


    			a[i][j]='.';

    			break;
    		}
    	}
    	if(s==1){
    		break;
    	}
    }

    for(i=0;i<x;i++){
    	for(j=0;j<y;j++){
    		if(a[i][j]=='*'){
    			s=0;
    		}
    		//cout<<a[i][j];
    	}
    	//cout<<endl;
    }
    if(s==1){
    	cout<<"YES";
    }
    else{
    	cout<<"NO";
    }


    return 0;
}
