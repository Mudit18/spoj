#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

int main(){
	long long int x,y,z;
	cin>>x>>y>>z;
	while(x!=0 || y!=0 || z!=0){
		if(y-x == z-y){
			cout<<"AP "<<z+(z-y)<<endl;
		}else{
			cout<<"GP "<<z*(z/y)<<endl;
		}

		cin>>x>>y>>z;
	}
	return 0;
}