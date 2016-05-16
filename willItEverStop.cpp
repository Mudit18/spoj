#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){

	lli a;
	cin>>a;
	
	if(pow(2,log(a)/log(2))==a){
		cout<<"TAK"<<endl;
	}else{
		cout<<"NIE"<<endl;
	}

	return 0;
}