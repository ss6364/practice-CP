#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n,a[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t=0,k,q,mid,beg=0,end=n-1;
    k=n/2;
    cin>>q;
    while(1){
    	mid=(beg+end)/2;
		if(a[beg]>q || a[end]<q){
			cout<<"NULL";break;
		}
		if(a[mid]==q){
    		cout<<mid ;break;
		}
		else if(a[mid]>q){
			end=mid-1;
		}
		else if(a[mid]<q){
		    beg=mid+1;
		}
	}
	return 0;
}
