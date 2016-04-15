#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

int main(){
	long long int t;
	cin>>t;
	while(t){
		t--;
		int a,b;
		cin>>a>>b;
		if(a<b || (a-b!=2 && a-b!=0)){
			cout<<"No Number"<<endl;
			continue;
		}
		if(a%2==0){
			cout<<a+b<<endl;
		}else{
			cout<<a+b-1<<endl;
		}

	}
	return 0;
}