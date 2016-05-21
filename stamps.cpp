#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){

	lli t;
	cin>>t;
	lli k=1;
	while(t--){
		cout<<"Scenario #"<<k<<":"<<endl;
		k++;
		lli n,m;
		cin>>n>>m;
		lli a[m];
		for(lli i=0;i<m;i++){
			cin>>a[i];
		}
		sort(a,a+m);
		lli i=m-1;
		lli counter=0;
		while(n>0 && counter<=m){
			n-=a[i--];
			counter++;
		}
		if(counter<=m)
			cout<<counter<<endl;
		else
			cout<<"impossible"<<endl;
		cout<<endl;
	}

	return 0;
}