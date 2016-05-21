#include <iostream>

#include <bits/stdc++.h>

using namespace::std;

#define lli long long int
#define pi 3.1415926

int main(){
	lli n;
	cin>>n;

	while(n!=0){
		double r=(n/pi);
		double ans= pi*(r*r)/2;
		printf("%.2f\n",ans);
		cin>>n;
	}
	return 0;
}