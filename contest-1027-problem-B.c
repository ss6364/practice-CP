#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=0,q=0;
	cin>>n>>q;
	if(n%2==0){
		while(q--){
			int x,y;
			int c=0,k=0,z=0;
			cin>>x>>y;
			//if(n%2==0){
				 k=n/2;
				 c=(x-1)*k;
				if( (x+y) % 2 == 0 && y%2!=0){
					c=c+ y/2 +1 ;
					cout<<c<<endl;
				}
				else if((x+y) % 2 == 0 && y%2==0){
					c=c+y/2 ;
					cout<<c<<endl;

				}
				else if( (x+y) % 2 != 0 && y%2!=0){
					c+= (y/2 + 1);
					int s = c + ( (n*n)/2 ) ;
					cout<<s<<endl;
				}
				else if( (x+y) % 2 != 0 && y%2==0){
					c+=(y/2);
					int s = c + ( (n*n)/2 ) ;
					cout<<s<<endl;
				}
			//}

		}
	}
	else {

		while(q--){
			int x,y;
			int c=0,k=0,z=0;
			cin>>x>>y;
			if(n%2==0){
				 k=n/2;
				 c=(x/2)*n;
				if( (x+y) % 2 == 0 && y%2==0){
					c=c - (n/2) + y/2  ;
					cout<<c<<endl;
				}
				else if((x+y) % 2 == 0 && y%2!=0){
					c=c + y/2 ;
					cout<<c<<endl;

				}
				else if( (x+y) % 2 != 0 && y%2==0){
					c+= (y/2 + 1);
					int s = c + ( (n*n)/2 + 1) ;
					cout<<s<<endl;
				}
				else if( (x+y) % 2 != 0 && y%2!=0){
					c+=(y/2);
					int s = c + ( (n*n)/2 + 1) ;
					cout<<s<<endl;
				}
			}

		}
	}

	return 0;
}
