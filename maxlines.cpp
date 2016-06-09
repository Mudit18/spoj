#include<iostream>
#include<bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){

	lli t;
	cin>>t;
	lli k=1;
	while(t--){
		lli r;
		cin>>r;
		double x=(4*(r*r))+0.25;
		printf("Case %lld: %.2f\n",k,x);
		k++;
	}
	return 0;
}