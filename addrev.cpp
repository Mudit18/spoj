#include<iostream>

using namespace::std;

int main(){
	int t;
	cin>>t;
	while(t){
		t--;
		long long int n,m,x,y,z;
		cin>>n>>m;
		int i=0;
		x=0;y=0;
		while(n>0){
			x=(x*10)+(n%10);
			n=n/10;
		}
		while(m>0){
			y=(y*10)+(m%10);
			m=m/10;
		}
		n=x+y;
		x=0;
		while(n>0){
			x=(x*10)+(n%10);
			n=n/10;
		}
		cout<<x<<endl;
	}
}