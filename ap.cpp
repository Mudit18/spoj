#include <iostream>

#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){
	lli t;
	cin>>t;
	while(t--){
		lli x,y,z;
		cin>>x>>y>>z;
		lli a,n,d;
		n=(z*2/(x+y));
		cout<<n<<endl;
		d=(y-x)/(n-5);
		a=x-(2*d);
		for(lli i=1;i<=n;i++){
			cout<<a+(i-1)*d<<" ";
		}
		cout<<endl;
	}
	return 0;
}