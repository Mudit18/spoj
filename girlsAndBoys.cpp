#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){
	lli g,b;
	cin>>g>>b;
	while(g!=-1){
		lli mx,mn;
		mx=max(g,b);
		mn=min(g,b);
		if(mn==0){
			cout<<mx<<endl;
		}else {
			lli part=mn+1;
			lli cons=mx/(part);
			if(mx%part!=0){
				cons++;
			}
			cout<<cons<<endl;
		}
		cin>>g>>b;
	}
	return 0;
}