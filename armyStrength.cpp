#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){

	lli t;
	cin>>t;
	while(t--){
		lli n,m;
		cin>>n>>m;
		lli a[n],b[m];
		lli mx=0;
		for(lli i=0;i<n;i++){
			cin>>a[i];
			mx=max(a[i],mx);
		}

		for(lli i=0;i<m;i++){
			cin>>b[i];
			mx=max(b[i],mx);
		}

		int flag=0;
		for(lli i=0;i<n;i++){
			if(a[i]==mx){
				flag=1;
				break;
			}
		}

		if(flag==1){
			cout<<"Godzilla"<<endl;
		}else{
			cout<<"MechaGodzilla"<<endl;
		}

	}

	return 0;
}