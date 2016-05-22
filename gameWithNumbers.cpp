#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){
	lli n;
	cin>>n;
	if(n%10==0){
		cout<<2<<endl;
	}else{
		cout<<1<<endl<<n%10<<endl;
	}
	return 0;
}