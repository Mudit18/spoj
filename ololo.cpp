#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){

	lli n;
	cin>>n;
	lli a=0;
	lli x;
	for(lli i=0;i<n;i++){
		scanf("%lld",&x);
		a=a^x;
	}
	printf("%lld",a);
	return 0;
}
