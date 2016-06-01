#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){
	lli a,d;
	cin>>a>>d;
	while(a!=0 || d!=0){
		lli ar1[a],ar2[d];
		for(lli i=0;i<a;i++){
			cin>>ar1[i];
		}
		for(lli i=0;i<d;i++){
			cin>>ar2[i];
		}
		sort(ar1,ar1+a);
		sort(ar2,ar2+d);
		if(ar1[0]<ar2[1]){
			cout<<'Y'<<endl;
		}else{
			cout<<'N'<<endl;
		}
		cin>>a>>d;
	}
	return 0;
}