#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

int main(){
	float c;
	cin>>c;
	while(c!=0){
		float sum=0;
		float k=1;
		while(sum<c){
			k+=1;
			sum+=(1/k);
		}
		cout<<k-1<<" card(s)"<<endl;
		cin>>c;
	}
	return 0;
}