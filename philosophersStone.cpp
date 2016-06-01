#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){
	int t;
	cin>>t;
	while(t--){
		lli h,w;
		cin>>h>>w;
		lli a[h][w],s[h][w];
		for(lli i=0;i<h;i++){
			for(lli j=0;j<w;j++){
				cin>>a[i][j];
				s[i][j]=a[i][j];
			}
		}
		for(lli i=h-2;i>=0;i--){
			s[i][0]+=max(s[i+1][1],s[i+1][0]);
			s[i][w-1]+=max(s[i+1][w-2],s[i+1][w-1]);
			for(lli j=1;j<w-1;j++){
				s[i][j]+=max(s[i+1][j+1],max(s[i+1][j-1],s[i+1][j]));
			}
		}

		/*for(lli i=0;i<h;i++){
			for(lli j=0;j<w;j++){
				cout<<s[i][j]<<" ";
			}
			cout<<endl;
		}*/
		lli m=0;
		for(lli j=0;j<w;j++){
			m=max(s[0][j],m);
		}
		cout<<m<<endl;
	}
	return 0;
}